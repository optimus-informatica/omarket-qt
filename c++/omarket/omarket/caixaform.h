#ifndef CAIXAFORM_H
#define CAIXAFORM_H

#include <QWidget>
#include <QtCore>
#include <QSqlQuery>
#include <QSqlError>
#include <QPrinter>
#include <QPainter>
#include <QPageSize>
#include <QPrintDialog>

#include "recibos.h"
#include "modelrecibo.h"
#include "recibodialog.h"

namespace Ui {
class CaixaForm;
}

class CaixaForm : public QWidget
{
    Q_OBJECT

public:
    explicit CaixaForm(QSettings *settings, QWidget *parent = nullptr);
    ~CaixaForm();

private:
    Ui::CaixaForm *ui;
    ModelRecibo *model;
    Recibos *recibos;
    QSettings *settings;
    QString reciboid;
    ReciboDialog *d_recibo;

    void clearAndFocus();

private slots:
    void barcodeReaded();
    void addItem();
    void print();
    void changeQuantidade(double v);
    void produtoAdicionado(double t);
    void calcular(double v);
    void errorReport(QString err);
};

#endif // CAIXAFORM_H
