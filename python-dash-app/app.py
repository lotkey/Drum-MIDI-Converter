from flask import Flask, send_from_directory
import dash
from dash import dcc
from dash import html
import os
import base64
from conversionmap import ConversionMap

UPLOAD_DIRECTORY = "./python-dash-app/app_uploaded_files"

if not os.path.exists(UPLOAD_DIRECTORY):
    os.makedirs(UPLOAD_DIRECTORY)

server = Flask(__name__)
app = dash.Dash(__name__)

@server.route("/download/<path:path>")
def download(path):
    """Serve a file from the upload directory."""
    return send_from_directory(UPLOAD_DIRECTORY, path, as_attachment=True)

app.layout = html.Div(
    id = 'parent', 
    children = [
        html.H1(
            id = 'H1', 
            children = 'Drum MIDI Converter', 
            style = {
                'textAlign':'left',
                'margin':10,
                'marginBottom':40
            }
        ),

        dcc.Upload(
            id = 'upload_fileInput',
            children = [
                html.Button(
                    'Upload MIDI',
                    id = 'button_upload'
                )
            ],
            accept = '.mid',
            style = {
                'margin':10
            }
        ),

        dcc.Dropdown(
            id = 'dropdown_mapIn',
            options = [{'label':i, 'value':i.upper()} for i in ConversionMap.getMappingNames('./python-dash-app/conversions/')],
            value = ConversionMap.getMappingNames('./python-dash-app/conversions/')[0].upper(),
            style = {
                'margin':10,
                'marginLeft':5
            }
        ),

        dcc.Dropdown(
            id = 'dropdown_mapOut',
            options = [{'label':i, 'value':i.upper()} for i in ConversionMap.getMappingNames('./python-dash-app/conversions/')],
            value = ConversionMap.getMappingNames('./python-dash-app/conversions/')[1].upper(),
            style = {
                'margin':10,
                'marginLeft':5
            }
        ),

        html.Button(
            'Download MIDI',
            id = 'download_fileOutput',
            style = {
                'marginLeft':10
            }
        ),

        dcc.Download(id='download')
    ]
)

@app.callback(
    dash.Output('download', 'data'),
    dash.Input('download_fileOutput', 'n_clicks'),
    prevent_initial_call = True
)
def export(n_clicks):
    return dict(content='Hello world!', filename='hello.txt')

def save_file(name, content):
    """Decode and store a file uploaded with Plotly Dash."""
    data = content.encode("utf8").split(b";base64,")[1]
    with open(os.path.join(UPLOAD_DIRECTORY, name), "wb") as fp:
        fp.write(base64.decodebytes(data))


def uploaded_files():
    """List the files in the upload directory."""
    files = []
    for filename in os.listdir(UPLOAD_DIRECTORY):
        path = os.path.join(UPLOAD_DIRECTORY, filename)
        if os.path.isfile(path):
            files.append(filename)
    return files


def file_download_link(filename):
    """Create a Plotly Dash 'A' element that downloads a file from the app."""
    location = "/download/{}".format(html.urlquote(filename))
    return html.A(filename, href=location)


@app.callback(
    dash.Output("file-list", "children"),
    [dash.Input("upload-data", "filename"), dash.Input("upload-data", "contents")],
)
def update_output(uploaded_filenames, uploaded_file_contents):
    """Save uploaded files and regenerate the file list."""

    if uploaded_filenames is not None and uploaded_file_contents is not None:
        for name, data in zip(uploaded_filenames, uploaded_file_contents):
            save_file(name, data)

    files = uploaded_files()
    if len(files) == 0:
        return [html.Li("No files yet!")]
    else:
        return [html.Li(file_download_link(filename)) for filename in files]

if __name__ == '__main__':
    app.run_server(debug=True)