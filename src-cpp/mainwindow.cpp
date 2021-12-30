#include <filesystem>
#include <QFileDialog>
#include <iostream>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "mappings/Mapping/Mappings.hpp"
#include "mappings/Mapping/Mapping.hpp"
#include "mappings/Mapping/ConversionMap.hpp"
#include "midifile/include/MidiFile.h"
#include "midifile/include/MidiEvent.h"
#include "midifile/include/MidiEventList.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      mappings(Mappings::getAllMappings()),
      ui(new Ui::MainWindow),
      parseTree(ParseTree("./tree"))
{
    ui->setupUi(this);
    for (const auto& [name, mapping] : mappings)
        mappingNames.append(name.c_str());

    ui->dropdownMappingFrom->addItems(mappingNames);
    ui->dropdownMappingTo->addItems(mappingNames);

    ui->dropdownMappingFrom->setDisabled(true);
    ui->dropdownMappingTo->setDisabled(true);
    ui->buttonExport->setDisabled(true);

    auto getInputLambda = [this]() {
        getInputFilename();
        showPercentMatch();
        ui->labelExport->setText("");
        ui->dropdownMappingFrom->setDisabled(false);
        ui->dropdownMappingTo->setDisabled(false);
        ui->buttonExport->setDisabled(false);
    };

    auto changeMappingFrom = [this]() {
        ui->labelExport->setText("");
        showPercentMatch();
        ui->buttonExport->setDisabled(false);
    };

    auto changeMappingTo = [this]() {
        ui->labelExport->setText("");
        ui->buttonExport->setDisabled(false);
    };

    connect(ui->buttonBrowseInput, &QPushButton::clicked, this, getInputLambda);
    connect(ui->buttonExport, &QPushButton::clicked, this, &MainWindow::exportMIDI);

    connect(ui->dropdownMappingFrom, &QComboBox::currentIndexChanged, this, changeMappingFrom);
    connect(ui->dropdownMappingTo, &QComboBox::currentIndexChanged, this, changeMappingTo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getInputFilename() {
    inputFilename = QFileDialog::getOpenFileName(this, "Open MIDI file", "./", tr("MIDI Files (*.mid *.midi)"));
    std::string label = inputFilename.value().toStdString();
    unsigned int lastSlash = label.find_last_of("/");
    label = label.substr(lastSlash + 1, label.length() - lastSlash - 1);
    ui->labelInputFilename->setText(label.c_str());
}

void MainWindow::exportMIDI() {
    if (inputFilename.has_value()) {
        QString outputFilename = QFileDialog::getSaveFileName(this, "Save file as:");

        Mapping mappingFrom = mappings[ui->dropdownMappingFrom->currentText().toStdString()];
        Mapping mappingTo = mappings[ui->dropdownMappingTo->currentText().toStdString()];
        ConversionMap conversionMap = parseTree.makeConversionMapping(mappingFrom, mappingTo);

        smf::MidiFile mf(inputFilename.value().toStdString());
        smf::MidiFile mfOut = smf::MidiFile();
        for (int i = 0; i < mf.getNumTracks(); i++) {
            for (int j = 0; j < mf[i].size(); j++) {
                if (mf[i][j].isNote()) {
                    int key = mf[i][j].getKeyNumber();
                    if (conversionMap.containsKey(key)) {
                        smf::MidiEvent event = mf[i][j];
                        event.setKeyNumber(conversionMap[key]);
                        mfOut.addEvent(i, event.tick / 8, event);
                    }
                } else {
                    mfOut.addEvent(i, mf[i][j].tick / 8, mf[i][j]);
                }
            }
        }

        mfOut.write(outputFilename.toStdString());
        std::string label = "Exported to " + outputFilename.toStdString();
        ui->labelExport->setText(label.c_str());
        ui->buttonExport->setDisabled(true);

    } else {
        ui->labelExport->setText("Select an input file first");
    }
}

void MainWindow::showPercentMatch() {
    if (inputFilename.has_value()) {
        Mapping map = mappings[ui->dropdownMappingFrom->currentText().toStdString()];
        smf::MidiFile mf(inputFilename.value().toStdString());
        double percent = map.getPercentMatch(mf);
        int integerPart = percent * 100;
        int firstDecimalDigit = percent * 1000 - integerPart * 10;
        int secondDecimalDigit = percent * 10000 - integerPart * 100 - firstDecimalDigit * 10;
        std::string label = std::to_string(integerPart) + "." + std::to_string(firstDecimalDigit) + std::to_string(secondDecimalDigit) + "% match";
        ui->labelPercentMatch->setText(label.c_str());
    } else {
        ui->labelPercentMatch->setText("Select an input file to see percent match");
    }
}
