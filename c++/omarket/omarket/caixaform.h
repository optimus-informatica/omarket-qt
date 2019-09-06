#ifndef CAIXAFORM_H
#define CAIXAFORM_H

#include <QWidget>
#include <QtCore>
#include <QSqlQuery>
#include <QSqlError>

#include "recibos.h"
#include "modelrecibo.h"

namespace Ui {
class CaixaForm;
}

class CaixaForm : public QWidget
{
    Q_OBJECT

public:
    explicit CaixaForm(QWidget *parent = nullptr);
    ~CaixaForm();

private:
    Ui::CaixaForm *ui;
    ModelRecibo *model;
    Recibos *recibos;

    void clearAndFocus();

private slots:
    void barcodeReaded();
    void addItem();
    void print();
    void changeQuantidade(double v);
    void produtoAdicionado(double t);
    void calcular(double v);
};

#endif // CAIXAFORM_H
