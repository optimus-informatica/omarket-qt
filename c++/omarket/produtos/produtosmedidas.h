#ifndef PRODUTOSMEDIDAS_H
#define PRODUTOSMEDIDAS_H

#include "produtos_global.h"
#include <QtCore>
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>

class PRODUTOSSHARED_EXPORT ProdutosMedidas : public QObject
{
    Q_OBJECT
public:
    explicit ProdutosMedidas(QObject *parent = nullptr);
    //QStringList medidas();
    QList<QMap<int, QString>> medidas();

signals:
    void errorReported(QString err);

public slots:
};

#endif // PRODUTOSMEDIDAS_H
