#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QtCore>
#include "usuarios.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QSettings *settings, QWidget *parent = nullptr);
    ~LoginDialog();

private:
    Ui::LoginDialog *ui;
    Usuarios *usuarios;
    QSettings *settings;

private slots:
    void logon();
};

#endif // LOGINDIALOG_H
