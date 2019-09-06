#ifndef PRODUTOS_H
#define PRODUTOS_H

#include "produtos_global.h"
#include <QtCore>
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>

class PRODUTOSSHARED_EXPORT Produtos : public QObject
{
    Q_OBJECT
public:
    explicit Produtos(QObject *parent = nullptr);
    bool add(QString produto, QString descricao, int medidaid, int tipoid, QString barcode, double valor, double custo, double estoque);

signals:
    void errorReported(QString err);
};

#endif // PRODUTOS_H
