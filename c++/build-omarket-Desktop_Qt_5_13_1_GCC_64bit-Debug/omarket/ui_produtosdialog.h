/********************************************************************************
** Form generated from reading UI file 'produtosdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUTOSDIALOG_H
#define UI_PRODUTOSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ProdutosDialog
{
public:
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLineEdit *produto;
    QLabel *label_4;
    QComboBox *tipos;
    QLabel *label_5;
    QLineEdit *descricao;
    QLabel *label_6;
    QLineEdit *barcode;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QComboBox *medidas;
    QLabel *label_8;
    QDoubleSpinBox *custo;
    QLabel *label_9;
    QDoubleSpinBox *lucro;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QDoubleSpinBox *valor;
    QLabel *label_11;
    QDoubleSpinBox *estoque;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QLabel *header;
    QLabel *logs;
    QTableView *tableView;

    void setupUi(QDialog *ProdutosDialog)
    {
        if (ProdutosDialog->objectName().isEmpty())
            ProdutosDialog->setObjectName(QString::fromUtf8("ProdutosDialog"));
        ProdutosDialog->resize(1024, 600);
        ProdutosDialog->setStyleSheet(QString::fromUtf8("#header {\n"
"	background-image: url(:/icon/64/cesta.png);\n"
"	background-repeat: no-repeat;\n"
"	font-size: 14pt;\n"
"	font-weight: bold;\n"
"	padding-left: 64px;\n"
"}\n"
"\n"
"QLabel {\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}"));
        gridLayout_5 = new QGridLayout(ProdutosDialog);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_4 = new QPushButton(ProdutosDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_5->addWidget(pushButton_4, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(922, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 5, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ProdutosDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(ProdutosDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ProdutosDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(ProdutosDialog);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(-1.000000000000000);
        doubleSpinBox->setMaximum(99999.000000000000000);
        doubleSpinBox->setValue(-1.000000000000000);

        gridLayout->addWidget(doubleSpinBox, 0, 3, 1, 1);

        pushButton = new QPushButton(ProdutosDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 4, 1, 1);


        gridLayout_5->addLayout(gridLayout, 1, 0, 1, 2);

        groupBox = new QGroupBox(ProdutosDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        produto = new QLineEdit(groupBox);
        produto->setObjectName(QString::fromUtf8("produto"));

        gridLayout_3->addWidget(produto, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 2, 1, 1);

        tipos = new QComboBox(groupBox);
        tipos->setObjectName(QString::fromUtf8("tipos"));
        tipos->setEditable(true);

        gridLayout_3->addWidget(tipos, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 4, 1, 1);

        descricao = new QLineEdit(groupBox);
        descricao->setObjectName(QString::fromUtf8("descricao"));

        gridLayout_3->addWidget(descricao, 0, 5, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 6, 1, 1);

        barcode = new QLineEdit(groupBox);
        barcode->setObjectName(QString::fromUtf8("barcode"));
        barcode->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(barcode, 0, 7, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        medidas = new QComboBox(groupBox);
        medidas->setObjectName(QString::fromUtf8("medidas"));
        medidas->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(medidas, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(label_8, 0, 2, 1, 1);

        custo = new QDoubleSpinBox(groupBox);
        custo->setObjectName(QString::fromUtf8("custo"));
        custo->setMaximum(99999.000000000000000);

        gridLayout_2->addWidget(custo, 0, 3, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(label_9, 0, 4, 1, 1);

        lucro = new QDoubleSpinBox(groupBox);
        lucro->setObjectName(QString::fromUtf8("lucro"));

        gridLayout_2->addWidget(lucro, 0, 5, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(pushButton_2, 0, 6, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(label_10, 0, 7, 1, 1);

        valor = new QDoubleSpinBox(groupBox);
        valor->setObjectName(QString::fromUtf8("valor"));
        valor->setMaximum(99999.000000000000000);

        gridLayout_2->addWidget(valor, 0, 8, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMaximumSize(QSize(65, 16777215));

        gridLayout_2->addWidget(label_11, 0, 9, 1, 1);

        estoque = new QDoubleSpinBox(groupBox);
        estoque->setObjectName(QString::fromUtf8("estoque"));
        estoque->setMaximum(999999.000000000000000);

        gridLayout_2->addWidget(estoque, 0, 10, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(902, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 2, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 3, 0, 1, 2);

        header = new QLabel(ProdutosDialog);
        header->setObjectName(QString::fromUtf8("header"));
        header->setMinimumSize(QSize(0, 64));

        gridLayout_5->addWidget(header, 0, 0, 1, 2);

        logs = new QLabel(ProdutosDialog);
        logs->setObjectName(QString::fromUtf8("logs"));

        gridLayout_5->addWidget(logs, 4, 0, 1, 2);

        tableView = new QTableView(ProdutosDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_5->addWidget(tableView, 2, 0, 1, 2);


        retranslateUi(ProdutosDialog);
        QObject::connect(pushButton_3, SIGNAL(clicked()), ProdutosDialog, SLOT(addProduto()));
        QObject::connect(pushButton_4, SIGNAL(clicked(bool)), ProdutosDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ProdutosDialog);
    } // setupUi

    void retranslateUi(QDialog *ProdutosDialog)
    {
        ProdutosDialog->setWindowTitle(QCoreApplication::translate("ProdutosDialog", "Produtos", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ProdutosDialog", "Fechar", nullptr));
        label->setText(QCoreApplication::translate("ProdutosDialog", "Filtro:", nullptr));
        label_2->setText(QCoreApplication::translate("ProdutosDialog", "Estoque:", nullptr));
        pushButton->setText(QCoreApplication::translate("ProdutosDialog", "Filtrar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProdutosDialog", "Novo produto", nullptr));
        label_3->setText(QCoreApplication::translate("ProdutosDialog", "Produto:", nullptr));
        label_4->setText(QCoreApplication::translate("ProdutosDialog", "Tipo:", nullptr));
        label_5->setText(QCoreApplication::translate("ProdutosDialog", "Descri\303\247\303\243o:", nullptr));
        label_6->setText(QCoreApplication::translate("ProdutosDialog", "C\303\263digo:", nullptr));
        label_7->setText(QCoreApplication::translate("ProdutosDialog", "Unidade:", nullptr));
        label_8->setText(QCoreApplication::translate("ProdutosDialog", "Custo:", nullptr));
        custo->setPrefix(QCoreApplication::translate("ProdutosDialog", "R$ ", nullptr));
        label_9->setText(QCoreApplication::translate("ProdutosDialog", "Lucro:", nullptr));
        lucro->setSuffix(QCoreApplication::translate("ProdutosDialog", "%", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ProdutosDialog", "Aplicar", nullptr));
        label_10->setText(QCoreApplication::translate("ProdutosDialog", "Valor:", nullptr));
        valor->setPrefix(QCoreApplication::translate("ProdutosDialog", "R$ ", nullptr));
        label_11->setText(QCoreApplication::translate("ProdutosDialog", "Estoque:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ProdutosDialog", "Adicionar", nullptr));
        header->setText(QCoreApplication::translate("ProdutosDialog", "Produtos", nullptr));
        logs->setText(QCoreApplication::translate("ProdutosDialog", "Logs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProdutosDialog: public Ui_ProdutosDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUTOSDIALOG_H
