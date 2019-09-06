#include "produtosdialog.h"
#include "ui_produtosdialog.h"

ProdutosDialog::ProdutosDialog(QWidget *parent) : QDialog(parent), ui(new Ui::ProdutosDialog)
{
    ui->setupUi(this);
    produtos = new Produtos;
    p_medidas = new ProdutosMedidas;
    p_tipos = new ProdutosTipos;

    connect(p_tipos, &ProdutosTipos::errorReported, this, &ProdutosDialog::errorReport);
    connect(p_medidas, &ProdutosMedidas::errorReported, this, &ProdutosDialog::errorReport);
    connect(produtos, &Produtos::errorReported, this, &ProdutosDialog::errorReport);

    QList<QMap<int, QString>> list = p_medidas->medidas();
    ui->medidas->clear();
    ui->tipos->clear();
    for (QMap<int, QString> item : list) {
        ui->medidas->addItem(item.first(), item.firstKey());
    }

    for (QPair<int, QString> item : p_tipos->tipos()) {
        ui->tipos->addItem(item.second, item.first);
    }

    model = new Produto;
    /*
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "PRODUTO");
    model->setHeaderData(2, Qt::Horizontal, "TIPO");
    model->setHeaderData(3, Qt::Horizontal, "DESCRIÇÃO");
    model->setHeaderData(4, Qt::Horizontal, "UM");
    model->setHeaderData(5, Qt::Horizontal, "CÓDIGO");
    model->setHeaderData(6, Qt::Horizontal, "CUSTO");
    model->setHeaderData(7, Qt::Horizontal, "VALOR");
    model->setHeaderData(7, Qt::Horizontal, "ESTOQUE");
    model->setHeaderData(8, Qt::Horizontal, "REGISTRADO");*/
    ui->tableView->setModel(model);
}

ProdutosDialog::~ProdutosDialog()
{
    delete ui;
}


// SLOTS

void ProdutosDialog::addProduto()
{
    QString produto = ui->produto->text();
    if (produto.isEmpty()) {
        ui->logs->setText("Preencha o campo produto, com o nome do produto.");
        return ;
    }
    int tipoid = p_tipos->getId(ui->tipos->currentText());
    if (tipoid == 0) {
        ui->logs->setText("Selecione ou preencha o campo tipo.");
        return ;
    }
    QString descricao = ui->descricao->text();
    if (descricao.isEmpty()) {
        ui->logs->setText("Preencha o campo descrição.");
        return ;
    }
    QString barcode = ui->barcode->text();
    if (barcode.isEmpty()) {
        ui->logs->setText("Preencha o campo código com o código de barras do produto.");
        return ;
    }
    int medidaid = ui->medidas->currentData().toInt();
    if (medidaid < 1) {
        ui->logs->setText("Selecione a unidade de medida do produto.");
        return ;
    }
    double custo = ui->custo->value();
    double valor = ui->valor->value();
    if (valor < 0.1) {
        ui->logs->setText("Preencha um valor válido para a venda do produto.");
        return ;
    }
    double estoque = ui->estoque->value();
    if (produtos->add(produto, descricao, medidaid, tipoid, barcode, valor, custo, estoque)) {
        qDebug() << "UPDATE";
        model->insertRows(barcode);
    }
}

void ProdutosDialog::errorReport(QString err)
{
    ui->logs->setText(err);
}
