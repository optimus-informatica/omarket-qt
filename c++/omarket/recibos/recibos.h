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
    explicit Recibos(QSettings *settings, QObject *parent=nullptr);
    QString start(QVariant usuarioid);
    void cancel(QString id);
    void end(QString id);
    QString getTextPlain(QString id);

private:
    const int max_size = 45;
    QStringList plainData;
    QSettings *settings;
    QString lastId(QVariant uid);
    QString centerLine(QString t);
    QString line();
    QString addTableLine(QVariantList cols);

signals:
    void errorReported(QString err);
};

#endif // RECIBOS_H
