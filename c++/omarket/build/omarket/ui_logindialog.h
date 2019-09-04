/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QFormLayout *formLayout;
    QLineEdit *usuario;
    QLabel *label_3;
    QLineEdit *senha;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->setWindowModality(Qt::WindowModal);
        LoginDialog->resize(403, 203);
        LoginDialog->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-size: 10pt;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	font-size: 10pt;\n"
"}\n"
"\n"
"#label {\n"
"	background-image: url(:/icon/64/cart.png);\n"
"	background-repeat: no-repeat;\n"
"	padding-left: 64px;\n"
"	font-size: 14pt;\n"
"	font-weight: bold;\n"
"}"));
        gridLayout_2 = new QGridLayout(LoginDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 64));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(LoginDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setAutoDefault(false);

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton = new QPushButton(LoginDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        usuario = new QLineEdit(LoginDialog);
        usuario->setObjectName(QString::fromUtf8("usuario"));

        formLayout->setWidget(0, QFormLayout::FieldRole, usuario);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        senha = new QLineEdit(LoginDialog);
        senha->setObjectName(QString::fromUtf8("senha"));

        formLayout->setWidget(1, QFormLayout::FieldRole, senha);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        gridLayout_2->addLayout(formLayout, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);

        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 2);


        retranslateUi(LoginDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), LoginDialog, SLOT(reject()));
        QObject::connect(pushButton, SIGNAL(clicked()), LoginDialog, SLOT(logon()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Painel de login", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "Painel de Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginDialog", "Fechar", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginDialog", "Entrar", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "Senha:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "Usu\303\241rio:", nullptr));
        label_4->setText(QCoreApplication::translate("LoginDialog", "Efeue o login para acessar o sistema.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
