#ifndef PRODUTOSTIPOS_H
#define PRODUTOSTIPOS_H

#include "produtos_global.h"
#include <QtCore>
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>

class PRODUTOSSHARED_EXPORT ProdutosTipos : public QObject
{
    Q_OBJECT
public:
    explicit ProdutosTipos(QObject *parent = nullptr);
    int getId(QString tipo);
    int add(QString tipo);
    QList<QPair<int, QString>> tipos();

signals:
    void errorReported(QString err);

public slots:
};

#endif // PRODUTOSTIPOS_H
