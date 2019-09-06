#ifndef PRODUTO_H
#define PRODUTO_H

#include "produtos_global.h"
#include <QAbstractTableModel>
#include <QtCore>
#include <QSqlQuery>
#include <QSqlError>
#include <QBrush>

class PRODUTOSSHARED_EXPORT Produto : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit Produto(QObject *parent = nullptr);
    int rowCount(const QModelIndex &index = QModelIndex()) const;
    int columnCount(const QModelIndex &index = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    bool insertRows(int position, int row, const QModelIndex &index = QModelIndex());
    bool insertRows(QString barcode);

private:
    QList<QVariantList> r_data; // row data
    QStringList c_data; // columns data

signals:

public slots:
};

#endif // PRODUTO_H
