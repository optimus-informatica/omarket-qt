#include "recibos.h"

Recibos::Recibos(QObject *parent) : QObject (parent)
{
}

QString Recibos::start(QVariant usuarioid)
{
    QString sql = "insert into recibos (usuarioid) values (:uid)";
    QString reciboid;
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":uid", usuarioid);
    if (!q.exec()) {
        return QString();
    }
    return lastId(usuarioid);
}

void Recibos::end(QString id)
{
    QString sql = "update recibos set e_date = current_timestamp where reciboid = :id";
    QString reciboid;
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":id", id);
    if (!q.exec()) {
        emit errorReported("Recibos::cancel" + q.lastError().text());
    }
}

void Recibos::cancel(QString id)
{
    QString sql = "delete from recibos where reciboid = :id";
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":id", id);
    if (!q.exec()) {
        emit errorReported("Recibos::cancel" + q.lastError().text());
    }

    sql = "delete from recibos_items where reciboid = :id";
    q.prepare(sql);
    q.bindValue(":id", id);
    if (!q.exec()) {
        emit errorReported("Recibos::cancel" + q.lastError().text());
    }
}

QString Recibos::lastId(QVariant uid)
{
    QSqlQuery q;
    QString sql = "select reciboid from recibos where usuarioid=:uid order by s_date";
    q.prepare(sql);
    q.bindValue(":uid", uid);
    if (!q.exec()) {
        emit errorReported(q.lastError().text());
        return QString();
    }

    if (!q.next()) {
        return QString();
    }

    return q.value("reciboid").toString();
}
