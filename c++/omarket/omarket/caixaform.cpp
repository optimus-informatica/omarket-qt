#include "caixaform.h"
#include "ui_caixaform.h"

CaixaForm::CaixaForm(QWidget *parent) : QWidget(parent), ui(new Ui::CaixaForm)
{
    ui->setupUi(this);
    model = new ModelRecibo;
    connect(model, &ModelRecibo::produtoAdicionado, this, &CaixaForm::produtoAdicionado);
    ui->tableView->setModel(model);
}

CaixaForm::~CaixaForm()
{
    delete ui;
}

void CaixaForm::barcodeReaded()
{
    QString sql = "select * from produtos where barcode=:barcode";
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":barcode", ui->barcode->text());
    if (!q.exec())
    {
        qDebug() << q.lastError();
        return ;
    }

    if (!q.next()) {}

    double valor = q.value("valor").toDouble();
    double quantidade = ui->quantidade->value();
    double p_total = valor * quantidade;

    ui->valor->setValue(valor);
    ui->p_total->setValue(p_total);
}

void CaixaForm::addItem()
{
    model->insertRows(ui->barcode->text(), ui->quantidade->value());
}

void CaixaForm::print()
{
    qDebug() << "PRINT";
}

void CaixaForm::changeQuantidade(double v)
{
    double valor = ui->valor->value();
    double p_total = valor * v;
    ui->p_total->setValue(p_total);
}

void CaixaForm::produtoAdicionado(double t)
{
    ui->v_total->setValue(t);
    clearAndFocus();
}

void CaixaForm::clearAndFocus()
{
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
    ui->barcode->setText("");
    ui->valor->setValue(0);
    ui->quantidade->setValue(1);
    ui->p_total->setValue(0);
    emit ui->barcode->setFocus();
}

void CaixaForm::calcular(double v)
{
    double troco = v - ui->v_total->value();
    ui->troco->setValue(troco);
}
