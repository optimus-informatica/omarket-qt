#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QSettings *settings, QWidget *parent) : QDialog(parent), ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    usuarios = new Usuarios;
    this->settings = settings;

    ui->usuario->setText(settings->value("session/usuario", "").toString());
    ui->senha->setText(settings->value("session/senha", "").toString());
}

LoginDialog::~LoginDialog()
{
    delete ui;
}


// SLOTS
void LoginDialog::logon()
{
    QString usuario = ui->usuario->text();
    QString senha = ui->senha->text();
    if (!usuarios->logon(usuario, senha, this->settings)) {
        ui->logs->setText("Usuário ou senha inválido.");
        return ;
    }
    if (ui->issave->isChecked()) {
        settings->sync();
    }
    accept();
}
