/********************************************************************************
** Form generated from reading UI file 'caixaform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAIXAFORM_H
#define UI_CAIXAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CaixaForm
{
public:
    QGridLayout *gridLayout_13;
    QLabel *header;
    QGridLayout *gridLayout_11;
    QLabel *label;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *barcode;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *quantidade;
    QGridLayout *gridLayout_12;
    QTableView *tableView;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *v_total;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QDoubleSpinBox *r_total;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_7;
    QDoubleSpinBox *troco;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDoubleSpinBox *valor;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *p_total;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CaixaForm)
    {
        if (CaixaForm->objectName().isEmpty())
            CaixaForm->setObjectName(QString::fromUtf8("CaixaForm"));
        CaixaForm->resize(828, 435);
        CaixaForm->setStyleSheet(QString::fromUtf8("#header {\n"
"	font-size: 18pt;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QDoubleSpinBox, QLineEdit {\n"
"	font-size:14pt;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	font-size: 14pt;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	font-size:14pt;\n"
"	font-weight: bold;\n"
"}"));
        gridLayout_13 = new QGridLayout(CaixaForm);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        header = new QLabel(CaixaForm);
        header->setObjectName(QString::fromUtf8("header"));
        header->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(header, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label = new QLabel(CaixaForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(128, 128));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/128/caixa.png")));

        gridLayout_11->addWidget(label, 0, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        groupBox_2 = new QGroupBox(CaixaForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        barcode = new QLineEdit(groupBox_2);
        barcode->setObjectName(QString::fromUtf8("barcode"));

        gridLayout_2->addWidget(barcode, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(CaixaForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        quantidade = new QDoubleSpinBox(groupBox_3);
        quantidade->setObjectName(QString::fromUtf8("quantidade"));
        quantidade->setMinimum(1.000000000000000);
        quantidade->setMaximum(999999.000000000000000);

        gridLayout_3->addWidget(quantidade, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_3, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_11, 1, 0, 1, 2);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        tableView = new QTableView(CaixaForm);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_12->addWidget(tableView, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(CaixaForm);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        v_total = new QDoubleSpinBox(groupBox_5);
        v_total->setObjectName(QString::fromUtf8("v_total"));
        v_total->setMaximum(99999.000000000000000);

        gridLayout_5->addWidget(v_total, 0, 0, 1, 1);


        gridLayout_12->addWidget(groupBox_5, 1, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_6 = new QGroupBox(CaixaForm);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        r_total = new QDoubleSpinBox(groupBox_6);
        r_total->setObjectName(QString::fromUtf8("r_total"));
        r_total->setMaximum(99999.000000000000000);

        gridLayout_6->addWidget(r_total, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(CaixaForm);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_7 = new QGridLayout(groupBox_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        troco = new QDoubleSpinBox(groupBox_7);
        troco->setObjectName(QString::fromUtf8("troco"));
        troco->setMaximum(99999.000000000000000);

        gridLayout_7->addWidget(troco, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_7, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(CaixaForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_8->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton = new QPushButton(CaixaForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setAutoDefault(false);

        gridLayout_8->addWidget(pushButton, 1, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_8, 2, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 1, 2, 3, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox = new QGroupBox(CaixaForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        valor = new QDoubleSpinBox(groupBox);
        valor->setObjectName(QString::fromUtf8("valor"));
        valor->setMaximum(99999.000000000000000);

        gridLayout->addWidget(valor, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(CaixaForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        p_total = new QDoubleSpinBox(groupBox_4);
        p_total->setObjectName(QString::fromUtf8("p_total"));
        p_total->setMaximum(99999.000000000000000);

        gridLayout_4->addWidget(p_total, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_4, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_9, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 184, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer, 3, 1, 1, 1);

        QWidget::setTabOrder(barcode, quantidade);
        QWidget::setTabOrder(quantidade, r_total);
        QWidget::setTabOrder(r_total, tableView);
        QWidget::setTabOrder(tableView, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, valor);
        QWidget::setTabOrder(valor, p_total);
        QWidget::setTabOrder(p_total, v_total);
        QWidget::setTabOrder(v_total, troco);

        retranslateUi(CaixaForm);
        QObject::connect(barcode, SIGNAL(editingFinished()), CaixaForm, SLOT(barcodeReaded()));
        QObject::connect(pushButton, SIGNAL(clicked()), CaixaForm, SLOT(addItem()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), CaixaForm, SLOT(print()));
        QObject::connect(quantidade, SIGNAL(valueChanged(double)), CaixaForm, SLOT(changeQuantidade(double)));
        QObject::connect(r_total, SIGNAL(valueChanged(double)), CaixaForm, SLOT(calcular(double)));

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(CaixaForm);
    } // setupUi

    void retranslateUi(QWidget *CaixaForm)
    {
        CaixaForm->setWindowTitle(QCoreApplication::translate("CaixaForm", "Form", nullptr));
        header->setText(QCoreApplication::translate("CaixaForm", "Caixa 01 - Aberto", nullptr));
        label->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("CaixaForm", "C\303\223DIGO DE BARRAS:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CaixaForm", "QUANTIDADE:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("CaixaForm", "VALOR TOTAL DA COMPRA:", nullptr));
        v_total->setPrefix(QCoreApplication::translate("CaixaForm", "R$ ", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("CaixaForm", "TOTAL RECEBIDO:", nullptr));
        r_total->setPrefix(QCoreApplication::translate("CaixaForm", "R$ ", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("CaixaForm", "TROCO:", nullptr));
        troco->setPrefix(QCoreApplication::translate("CaixaForm", "R$ ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CaixaForm", "FINALIZAR E IMPRIMIR (CTRL+P)", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_2->setShortcut(QCoreApplication::translate("CaixaForm", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton->setText(QCoreApplication::translate("CaixaForm", "ADICIONAR (ENTER)", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("CaixaForm", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("CaixaForm", "VALOR UNIT\303\201RIO:", nullptr));
        valor->setPrefix(QCoreApplication::translate("CaixaForm", "R$ ", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("CaixaForm", "VALOR TOTAL:", nullptr));
        p_total->setPrefix(QCoreApplication::translate("CaixaForm", "R$ ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaixaForm: public Ui_CaixaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAIXAFORM_H
