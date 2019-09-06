#ifndef RECIBOS_H
#define RECIBOS_H

#include "recibos_global.h"
#include <QtCore>
#include <QSqlQuery>
#include <QSqlError>
class RECIBOSSHARED_EXPORT Recibos : public QObject
{
    Q_OBJECT
public:
    explicit Recibos(QObject *parent=nullptr);

signals:
    void errorReported(QString);
};

#endif // RECIBOS_H
