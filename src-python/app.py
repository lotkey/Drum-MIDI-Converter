import dash
from dash import dcc, html, Input, Output, State
from conversionmap import ConversionMap
import base64
from mido import MidiFile

DOWNLOAD_PATH = './src-python/upload.mid'
CONVERTED_PATH = './src-python/converted.mid'
CONVERSIONS_PATH = './src-python/conversions.lkcmap'

app = dash.Dash(__name__)
app.title = 'Drum MIDI Converter'
server = app.server
conversionMaps = ConversionMap.loadAllConversionMaps(CONVERSIONS_PATH)
mappingNames = list(ConversionMap.getMappingNames(CONVERSIONS_PATH))
mappingNames.sort()

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
                ),
                html.Div(
                    children = '',
                    id = 'filename'
                )
            ],
            accept = '.mid',
            style = {
                'margin':10
            }
        ),

        html.Div(
            children = 'Convert from:',
            style = {
                'marginLeft':10
            }
        ),

        dcc.Dropdown(
            id = 'dropdown_mapIn',
            options = [{'label':i, 'value':i.upper()} for i in mappingNames],
            value = mappingNames[0].upper(),
            style = {
                'margin':10,
                'marginLeft':5
            }
        ),

        html.Div(
            children = 'Convert to:',
            style = {
                'marginLeft':10
            }
        ),

        dcc.Dropdown(
            id = 'dropdown_mapOut',
            options = [{'label':i, 'value':i.upper()} for i in mappingNames],
            value = mappingNames[1].upper(),
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
            },
            disabled = True
        ),

        dcc.Download(id='download'),

        html.Div(
            id = 'hidden1',
            style = {
                'display':'none'
            }
        )
    ]
)

@app.callback(
    Output('download', 'data'),
    Input('download_fileOutput', 'n_clicks'),
    State('upload_fileInput', 'contents'),
    State('upload_fileInput', 'filename'),
    State('dropdown_mapIn', 'value'),
    State('dropdown_mapOut', 'value'),
    prevent_initial_call = True
)
def export(num_clicks, content, filename, mapIn, mapOut):
    try:
        save_file(DOWNLOAD_PATH, content)
        map = conversionMaps[mapIn.upper()][mapOut.upper()]
        convert_midi(map)

        fn = f'''{filename[:filename.rfind('.')]} ({mapOut}).mid'''
        with open(CONVERTED_PATH, 'rb') as infile:
            return dcc.send_bytes(infile.read(), filename=fn)
    except Exception as e:
        return dict(content=str(e), filename='error.txt')

@app.callback(
    Output('download_fileOutput', 'disabled'),
    Input('upload_fileInput', 'contents'),
)
def enable_download_button(contents):
    if contents is not None:
        return False
    return dash.no_update

@app.callback(
    Output('filename', 'children'),
    Input('upload_fileInput', 'filename')
)
def display_filename(filename):
    return filename

def save_file(path, content):
    data = content.encode('utf8').split(b';base64,')[1]
    with open(path, 'wb') as outfile:
        outfile.write(base64.decodebytes(data))

def convert_midi(conversionMap:ConversionMap):
    inmidi = MidiFile(DOWNLOAD_PATH)
    outmidi = MidiFile()

    for i, track in enumerate(inmidi.tracks):
        outmidi.add_track()
        for j, msg in enumerate(track):
            if (msg.type in ['note_on', 'note_off']):
                if (conversionMap.contains(msg.note)):
                    msg.note = conversionMap.at(msg.note)
                    outmidi.tracks[i].append(msg)
            else:
                outmidi.tracks[i].append(msg)

    outmidi.save(file=open(CONVERTED_PATH, 'wb'))

if __name__ == '__main__':
    app.run_server(debug=True)