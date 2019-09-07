#ifndef MODELRECIBO_H
#define MODELRECIBO_H

#include "recibos_global.h"
#include <QAbstractTableModel>
#include <QtCore>
#include <QSqlQuery>
#include <QSqlError>
#include <QBrush>
class RECIBOSSHARED_EXPORT ModelRecibo : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit ModelRecibo(QObject *parent = nullptr);
    void setId(QString id);
    int rowCount(const QModelIndex &index = QModelIndex()) const;
    int columnCount(const QModelIndex &index = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    bool insertRows(int position, int row, const QModelIndex &index = QModelIndex());
    bool insertRows(QString barcode, double quantidade);
    void clear();

private:
    QStringList c_data;
    QList<QVariantList> r_data;
    double v_total;
    QString id;

    void sqlInsertRow(QVariantList data);

signals:
    void produtoAdicionado(double total);

public slots:
};

#endif // MODELRECIBO_H
