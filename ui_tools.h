/********************************************************************************
** Form generated from reading UI file 'tools.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLS_H
#define UI_TOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tools
{
public:
    QAction *actionExit;
    QAction *actionExec;
    QAction *actionClear;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *txtOutput;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Tools)
    {
        if (Tools->objectName().isEmpty())
            Tools->setObjectName(QString::fromUtf8("Tools"));
        Tools->resize(564, 400);
        Tools->setMinimumSize(QSize(500, 400));
        Tools->setMaximumSize(QSize(720, 720));
        actionExit = new QAction(Tools);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Close-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionExec = new QAction(Tools);
        actionExec->setObjectName(QString::fromUtf8("actionExec"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/play-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExec->setIcon(icon1);
        actionClear = new QAction(Tools);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/edit-clear-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon2);
        centralwidget = new QWidget(Tools);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        txtOutput = new QPlainTextEdit(centralwidget);
        txtOutput->setObjectName(QString::fromUtf8("txtOutput"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        txtOutput->setFont(font);
        txtOutput->setAcceptDrops(false);
        txtOutput->setReadOnly(true);

        verticalLayout->addWidget(txtOutput);

        Tools->setCentralWidget(centralwidget);
        toolBar = new QToolBar(Tools);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Tools->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(Tools);

        QMetaObject::connectSlotsByName(Tools);
    } // setupUi

    void retranslateUi(QMainWindow *Tools)
    {
        Tools->setWindowTitle(QCoreApplication::translate("Tools", "Tools", nullptr));
        actionExit->setText(QCoreApplication::translate("Tools", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("Tools", "Exit", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExec->setText(QCoreApplication::translate("Tools", "Exec", nullptr));
#if QT_CONFIG(tooltip)
        actionExec->setToolTip(QCoreApplication::translate("Tools", "Execute Command", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClear->setText(QCoreApplication::translate("Tools", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("Tools", "Clear Output", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("Tools", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tools: public Ui_Tools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLS_H
