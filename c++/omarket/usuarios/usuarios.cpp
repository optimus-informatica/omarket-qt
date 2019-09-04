#include "usuarios.h"

Usuarios::Usuarios(QObject *parent) : QObject (parent)
{
}

bool Usuarios::logon(QString usuario, QString senha, QSettings *session)
{
    QString sql = "select count(*) c, usuarioid, isadmin, iscaixa, isfinanceiro, issystem, isrh from usuarios inner join usuarios_perms using (usuarioid) where usuario=? and senha=encode(digest(?, 'sha256') group by usuarioid, isadmin, iscaixa, isfinanceiro, issystem, isrh";
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(0, usuario);
    q.bindValue(1, senha);

    if (!q.exec()) {
        return false;
    }

    if (!q.next()) {
        return false;
    }

    if (q.value("c").toInt() == 0) {
        return false;
    }
    session->setValue("usuarioid", q.value("usuarioid"));
    session->setValue("isadmin", q.value("isadmin"));
    session->setValue("iscaixa", q.value("iscaixa"));
    session->setValue("isfinanceiro", q.value("isfinanceiro"));
    session->setValue("issystem", q.value("issystem"));
    session->setValue("isrh", q.value("isrh"));
    return true;
}
