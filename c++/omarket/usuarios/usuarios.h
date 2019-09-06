#ifndef USUARIOS_H
#define USUARIOS_H

#include "usuarios_global.h"
#include <QtCore>
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>

class USUARIOSSHARED_EXPORT Usuarios : public QObject
{
    Q_OBJECT
public:
    explicit Usuarios(QObject *parent = nullptr);
    bool logon(QString usuario, QString senha, QSettings *session);
    virtual ~Usuarios();
};

#endif // USUARIOS_H
