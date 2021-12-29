import dash
from dash import dcc
from dash import html
import plotly.graph_objects as go
import plotly.express as px
from conversionmap import ConversionMap

app = dash.Dash(__name__)

app.layout = html.Div(
    id = 'parent', 
    children = [
        html.H1(
            id = 'H1', 
            children = 'Drum MIDI Converter', 
            style = {
                'textAlign':'center',
                'marginTop':40,
                'marginBottom':40
            }
        ),

        dcc.Upload(
            id = 'upload_fileInput',
            children = [
                html.Button(
                    'Upload',
                    id = 'button_upload'
                )
            ],
            accept = '*.mid'
        ),

        dcc.Dropdown(
            id = 'dropdown_mapIn',
            options = [{'label':i, 'value':i.upper()} for i in ConversionMap.getMappingNames('./python-dash-app/conversions/')],
            value = ConversionMap.getMappingNames('./python-dash-app/conversions/')[0].upper()
        ),

        dcc.Dropdown(
            id = 'dropdown_mapOut',
            options = [{'label':i, 'value':i.upper()} for i in ConversionMap.getMappingNames('./python-dash-app/conversions/')],
            value = ConversionMap.getMappingNames('./python-dash-app/conversions/')[1].upper()
        ),

        html.Button(
            'Download',
            id = 'download_fileOutput'
        ),

        dcc.Download(id='download')
    ]
)

@app.callback(
    dash.Output('download', 'data'),
    dash.Input('download_fileOutput', 'n_clicks'),
    prevent_initial_call = True
)
def func(n_clicks):
    return dict(content='Hello world!', filename='hello.txt')

if __name__ == '__main__':
    app.run_server(debug=True)