#include "produtos.h"

Produtos::Produtos(QObject *parent) : QObject (parent)
{
}

bool Produtos::add(QString produto, QString descricao, int medidaid, int tipoid, QString barcode, double valor, double custo, double estoque)
{
    QSqlQuery q;
    QString sql = "insert into produtos (produto, descricao, medidaid, tipoid, barcode, valor, custo, estoque) values (:produto, :descricao, :medida, :tipo, :barcode, :valor, :custo, :estoque)";
    q.prepare(sql);
    q.bindValue(":produto", produto);
    q.bindValue(":descricao", descricao);
    q.bindValue(":medida", medidaid);
    q.bindValue(":tipo", tipoid);
    q.bindValue(":barcode", barcode);
    q.bindValue(":valor", valor);
    q.bindValue(":custo", custo);
    q.bindValue(":estoque", estoque);
    if (!q.exec()) {
        emit errorReported(q.lastError().text());
        return false;
    }
    return true;
}
