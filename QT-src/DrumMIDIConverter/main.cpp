#include "mainwindow.h"

#include <QCoreApplication>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Drum MIDI Converter");
    a.setOrganizationName("Lotkey Audio");
    MainWindow w;
    w.setWindowTitle("Drum MIDI Converter");
    w.show();
    return a.exec();
}
