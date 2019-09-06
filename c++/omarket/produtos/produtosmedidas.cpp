#include "produtosmedidas.h"

ProdutosMedidas::ProdutosMedidas(QObject *parent) : QObject(parent)
{

}

QList<QMap<int, QString>> ProdutosMedidas::medidas()
{
    QString sql = "select medidaid, medida from produtos_medidas order by medida";
    QSqlQuery q;
    q.prepare(sql);
    if (!q.exec()) {
        errorReported(q.lastError().text());
        return QList<QMap<int, QString>>();
    }
    QList<QMap<int, QString>> list;
    while (q.next()) {
        QMap<int, QString> item;
        item.insert(q.value("medidaid").toInt(), q.value("medida").toString());
        list.append(item);
    }
    return list;
}
