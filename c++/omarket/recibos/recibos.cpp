#include "recibos.h"

Recibos::Recibos(QSettings *settings, QObject *parent) : QObject (parent)
{
    this->settings = settings;
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

QString Recibos::getTextPlain(QString id)
{
    QTemporaryFile temp;
    QVariantList headers;
    QVariantList data;

    temp.setAutoRemove(false);
    if (!temp.open()) {
        return QString();
    }
    QTextStream strem(&temp);

    headers << "cod" << "produto" << "qtd" << "un" << "v. unt" << "v. total";

    plainData = QStringList();
    plainData.append(centerLine(settings->value("empresa/nome").toString()));
    plainData.append(centerLine(settings->value("empresa/addr").toString()));
    plainData.append(centerLine(settings->value("empresa/cnpj").toString()));

    QSqlQuery q;
    QString sql = "select * from v_recibos_items  where reciboid=:id";
    q.prepare(sql);
    q.bindValue(":id", id);
    if (!q.exec()) {
        return QString();
    }

    bool h = true;

    while (q.next()) {
        if (h) {
            plainData.append(centerLine(q.value("f_date").toString()));
            plainData.append(centerLine(q.value("reciboid").toString()));
            plainData.append(line());
            plainData.append(addTableLine(headers));
            plainData.append(line());
            h = false;
        }
        data = QVariantList();
        data.append(q.value("produtoid"));
        data.append(q.value("produto"));
        data.append(q.value("quantidade"));
        data.append(q.value("medida"));
        data.append(q.value("valor"));
        data.append(q.value("total"));
        plainData.append(addTableLine(data));
    }
    plainData.append(line());
    for (int i=0; i<10; i++) plainData.append(" \n");
    for (QString ln : plainData) {
        strem << ln;
    }
    temp.close();
    return temp.fileName();
}

QString Recibos::centerLine(QString t)
{
    int s = ((max_size/2) - (t.length() / 2)) + t.length();
    return t.rightJustified(s, ' ').toUpper().append("\n");
}

QString Recibos::line()
{
    QString l = "_";
    return l.rightJustified(max_size, '_').append("\n");
}

QString Recibos::addTableLine(QVariantList cols)
{
    QString line;
    for (int i=0; i<cols.size()-1; i++) {
        line.append(cols[i].toString()).append("  ");
    }
    line.append(cols.last().toString());
    return line.append("\n").toUpper();
}
