/********************************************************************************
** Form generated from reading UI file 'recibodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIBODIALOG_H
#define UI_RECIBODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReciboDialog
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *notepad;
    QPushButton *pushButton;

    void setupUi(QDialog *ReciboDialog)
    {
        if (ReciboDialog->objectName().isEmpty())
            ReciboDialog->setObjectName(QString::fromUtf8("ReciboDialog"));
        ReciboDialog->resize(400, 300);
        gridLayout = new QGridLayout(ReciboDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        notepad = new QPlainTextEdit(ReciboDialog);
        notepad->setObjectName(QString::fromUtf8("notepad"));

        gridLayout->addWidget(notepad, 0, 0, 1, 1);

        pushButton = new QPushButton(ReciboDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(ReciboDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), ReciboDialog, SLOT(print()));

        QMetaObject::connectSlotsByName(ReciboDialog);
    } // setupUi

    void retranslateUi(QDialog *ReciboDialog)
    {
        ReciboDialog->setWindowTitle(QCoreApplication::translate("ReciboDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ReciboDialog", "Imprimir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReciboDialog: public Ui_ReciboDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIBODIALOG_H
