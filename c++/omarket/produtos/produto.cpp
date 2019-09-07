#include "produto.h"

Produto::Produto(QObject *parent) : QAbstractTableModel(parent)
{
    QString sql = "select produtoid, produto, tipo, descricao, medida, barcode, custo, valor, estoque, registro from v_produtos order by produtoid";
    QSqlQuery q;
    q.prepare(sql);

    c_data << "ID" << "PRODUTO" << "TIPO" << "DESCRIÇÃO" << "UM" << "CÒDIGO" << "CUSTO" << "VALOR" << "ESTOQUE" << "REGISTRO";

    if (q.exec()) {
        while(q.next()) {
            QVariantList item;
            for (int i=0; i<c_data.size(); i++) {
                item.append(q.value(i));
            }
            r_data.append(item);
        }
    }
}

int Produto::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return r_data.size();
}

int Produto::columnCount(const QModelIndex &index) const
{
    Q_UNUSED(index)
    return c_data.size();
}

QVariant Produto::data(const QModelIndex &index, int role) const
{
    switch (role) {
        case Qt::DisplayRole:
            return r_data[index.row()][index.column()];
        case Qt::BackgroundRole:
        if (index.row() % 2 == 0) {
            QBrush gray(Qt::lightGray);
            return gray;
        }
    }
    return QVariant();
}

QVariant Produto::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Horizontal) {
        switch (role) {
            case Qt::DisplayRole:
            return c_data[section];
        }
    }
    return QVariant();
}

bool Produto::insertRows(int row, int count, const QModelIndex &parent)
{
    beginInsertRows(parent, row, count + row -1);
    endInsertRows();
    return true;
}

bool Produto::insertRows(QString barcode)
{
    emit beginInsertRows(QModelIndex(), r_data.size(), r_data.size());
    QString sql = "select produtoid, produto, tipo, descricao, medida, barcode, custo, valor, estoque, registro from v_produtos where barcode=:barcode";
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":barcode", barcode);
    if (!q.exec()) {
        qDebug() << q.lastError().text();
        return false;
    }

    if (!q.next()) {
        qDebug() << q.lastError().text();
        return false;
    }

    QVariantList list;
    for (int i=0; i<c_data.size(); i++) {
        list.append(q.value(i));
    }
    r_data.append(list);
    emit endInsertRows();
    return true;
}
