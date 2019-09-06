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
    QString start(QVariant usuarioid);
    void cancel(QString id);
    void end(QString id);
    //QFile get(QString id);

private:
    QString lastId(QVariant uid);

signals:
    void errorReported(QString err);
};

#endif // RECIBOS_H
