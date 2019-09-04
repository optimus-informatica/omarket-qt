#ifndef USUARIOS_H
#define USUARIOS_H

#include "usuarios_global.h"
#include <QtCore>
#include <QSqlQuery>
#include <QSqlError>
class USUARIOSSHARED_EXPORT Usuarios : public QObject
{
    Q_OBJECT
public:
    Usuarios(QObject *parent = nullptr);
    bool logon(QString usuario, QString senha, QSettings *session);
};

#endif // USUARIOS_H
