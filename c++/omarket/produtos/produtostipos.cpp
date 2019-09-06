#include "produtostipos.h"

ProdutosTipos::ProdutosTipos(QObject *parent) : QObject(parent)
{

}

int ProdutosTipos::getId(QString tipo)
{
    QString sql = "select tipoid from produtos_tipos where tipo = :var";
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":var", tipo);
    if (!q.exec()) {
        emit errorReported("getId::" + q.lastError().text() + "\n" + q.lastQuery());
        return 0;
    }
    if (!q.next()) {
        return add(tipo);
    }
    return q.value(0).toInt();
}

int ProdutosTipos::add(QString tipo)
{
    QString sql = "insert into produtos_tipos (tipo) values (:var)";
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":var", tipo);
    if (!q.exec()) {
        emit errorReported("add::" + q.lastError().text() + "\n" + q.lastQuery());
        return 0;
    }
    return getId(tipo);
}

QList<QPair<int, QString>> ProdutosTipos::tipos()
{
    QString sql = "select tipoid, tipo from produtos_tipos order by tipo";
    QSqlQuery q;
    q.prepare(sql);
    if (!q.exec()) {
        emit errorReported("tipos::" + q.lastError().text() + "\n" + q.lastQuery());
        return QList<QPair<int, QString>>();
    }
    QList<QPair<int, QString>> list;
    while (q.next()) {
        QPair<int, QString> item;
        item.first = q.value(0).toInt();
        item.second = q.value(1).toString();
        list.append(item);
    }
    return list;
}
