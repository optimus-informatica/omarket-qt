#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) : QDialog(parent), ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    usuarios = new Usuarios;
}

LoginDialog::~LoginDialog()
{
    delete ui;
}


// SLOTS
void LoginDialog::logon()
{
    QSettings session;
    QString usuario = ui->usuario->text();
    QString senha = ui->senha->text();
    //if (!usuarios->logon(usuario, senha, &session)) {
    //}
    //qDebug() << session.value("usuarioid");
    accept();
}
