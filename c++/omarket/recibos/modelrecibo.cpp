#include "modelrecibo.h"

ModelRecibo::ModelRecibo(QObject *parent) : QAbstractTableModel(parent)
{
    c_data << "CÒDIGO" << "DESCRIÇÂO" << "QTD" << "V. UNT" << "TOTAL";
    v_total = 0.0;
    r_data = QList<QVariantList>();
}

void ModelRecibo::setId(QString id)
{
    r_data.clear();
    this->id = id;
}

int ModelRecibo::rowCount(const QModelIndex &index) const
{
    Q_UNUSED(index);
    return r_data.size();
}

int ModelRecibo::columnCount(const QModelIndex &index) const
{
    Q_UNUSED(index);
    return c_data.size();
}

QVariant ModelRecibo::data(const QModelIndex &index, int role) const
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

QVariant ModelRecibo::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Horizontal) {
        switch (role) {
            case Qt::DisplayRole:
            return c_data[section];
        }
    }
    if (orientation == Qt::Vertical) {
        if (role == Qt::DisplayRole) {
            return section + 1;
        }
    }
    return QVariant();
}

bool ModelRecibo::insertRows(int row, int count, const QModelIndex &parent)
{
    beginInsertRows(parent, row, count + row -1);
    endInsertRows();
    return true;
}

bool ModelRecibo::insertRows(QString barcode, double qtd)
{
    emit beginInsertRows(QModelIndex(), r_data.size(), r_data.size());
    QString sql = "select barcode, descricao, :qtd as quantidade, valor, :qtd * valor as total, custo from v_produtos where barcode=:barcode";
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":barcode", barcode);
    q.bindValue(":qtd", qtd);
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
    v_total += list[4].toDouble();
    r_data.append(list);
    list.append(q.value(5));

    sqlInsertRow(list);

    emit endInsertRows();
    emit produtoAdicionado(v_total);
    return true;
}

void ModelRecibo::sqlInsertRow(QVariantList data)
{
    QSqlQuery q;
    QString sql = "insert into recibos_items values (:id, :barcode, :custo, :valor)";
    q.prepare(sql);
    q.bindValue(":id", id);
    q.bindValue(":barcode", data[0]);
    q.bindValue(":custo", data[5]);
    q.bindValue(":valor", data[3]);
    if (!q.exec()) {
        qDebug() << q.lastError();
    }
}
