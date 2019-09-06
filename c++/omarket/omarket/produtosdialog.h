#ifndef PRODUTOSDIALOG_H
#define PRODUTOSDIALOG_H

#include <QDialog>
#include <QtCore>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>

#include "produtos.h"
#include "produtosmedidas.h"
#include "produtostipos.h"
#include "produto.h"

namespace Ui {
class ProdutosDialog;
}

class ProdutosDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProdutosDialog(QWidget *parent = nullptr);
    ~ProdutosDialog();

private:
    Ui::ProdutosDialog *ui;
    Produto *model;
    Produtos *produtos;
    ProdutosMedidas *p_medidas;
    ProdutosTipos *p_tipos;

 private slots:
    void addProduto();
    void errorReport(QString err);
};

#endif // PRODUTOSDIALOG_H
