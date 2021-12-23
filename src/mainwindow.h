#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QLabel>
#include <QComboBox>
#include <map>
#include <string>
#include <optional>

#include "mappings/Parsing/ParseTree.hpp"
#include "mappings/Mapping/Mappings.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    std::map<std::string, Mapping> mappings;
    QStringList mappingNames;
    ParseTree parseTree;
    Ui::MainWindow *ui;
    std::optional<QString> inputFilename;

    void getInputFilename();
    void exportMIDI();
    void showPercentMatch();
};
#endif // MAINWINDOW_H
