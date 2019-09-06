#include "usuarios.h"

Usuarios::Usuarios(QObject *parent) : QObject (parent)
{
}

bool Usuarios::logon(QString usuario, QString senha, QSettings *session)
{
    QString sql;
    if (senha.length() == 64) {
        sql = "select senha=:pass as logon, usuarioid, isadmin, iscaixa, isfinanceiro, issystem, isrh, usuario, senha from usuarios inner join usuarios_perms using (usuarioid) where usuario=:user";
    }
    else {
        sql = "select senha=encode(digest(:pass, 'sha256'), 'hex') logon, usuarioid, isadmin, iscaixa, isfinanceiro, issystem, isrh, usuario, senha from usuarios inner join usuarios_perms using (usuarioid) where usuario=:user";
    }
    QSqlQuery q;
    q.prepare(sql);
    q.bindValue(":user", usuario);
    q.bindValue(":pass", senha);

    if (!q.exec()) {
        qDebug() << q.lastError();
        return false;
    }

    if (!q.next()) {
        return false;
    }

    if (!q.value("logon").toBool()) {
        return false;
    }
    session->setValue("session/usuarioid", q.value("usuarioid"));
    session->setValue("session/isadmin", q.value("isadmin"));
    session->setValue("session/iscaixa", q.value("iscaixa"));
    session->setValue("session/isfinanceiro", q.value("isfinanceiro"));
    session->setValue("session/issystem", q.value("issystem"));
    session->setValue("session/isrh", q.value("isrh"));
    session->setValue("session/usuario", q.value("usuario"));
    session->setValue("session/senha", q.value("senha"));
    return true;
}

Usuarios::~Usuarios()
{}
