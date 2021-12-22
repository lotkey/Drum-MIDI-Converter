/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *buttonBrowseInput;
    QLabel *labelInputFilename;
    QComboBox *dropdownMappingFrom;
    QLabel *labelPercentMatch;
    QComboBox *dropdownMappingTo;
    QPushButton *buttonExport;
    QLabel *labelExport;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(534, 165);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(1, 0, 461, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        buttonBrowseInput = new QPushButton(formLayoutWidget);
        buttonBrowseInput->setObjectName(QString::fromUtf8("buttonBrowseInput"));

        formLayout->setWidget(0, QFormLayout::LabelRole, buttonBrowseInput);

        labelInputFilename = new QLabel(formLayoutWidget);
        labelInputFilename->setObjectName(QString::fromUtf8("labelInputFilename"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelInputFilename);

        dropdownMappingFrom = new QComboBox(formLayoutWidget);
        dropdownMappingFrom->setObjectName(QString::fromUtf8("dropdownMappingFrom"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dropdownMappingFrom);

        labelPercentMatch = new QLabel(formLayoutWidget);
        labelPercentMatch->setObjectName(QString::fromUtf8("labelPercentMatch"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelPercentMatch);

        dropdownMappingTo = new QComboBox(formLayoutWidget);
        dropdownMappingTo->setObjectName(QString::fromUtf8("dropdownMappingTo"));

        formLayout->setWidget(2, QFormLayout::LabelRole, dropdownMappingTo);

        buttonExport = new QPushButton(formLayoutWidget);
        buttonExport->setObjectName(QString::fromUtf8("buttonExport"));

        formLayout->setWidget(3, QFormLayout::LabelRole, buttonExport);

        labelExport = new QLabel(formLayoutWidget);
        labelExport->setObjectName(QString::fromUtf8("labelExport"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelExport);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 534, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonBrowseInput->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        labelInputFilename->setText(QString());
        labelPercentMatch->setText(QString());
        buttonExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        labelExport->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
