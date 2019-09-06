#include "recibodialog.h"
#include "ui_recibodialog.h"

#include <QPrintDialog>

ReciboDialog::ReciboDialog(QWidget *parent) : QDialog(parent), ui(new Ui::ReciboDialog)
{
    ui->setupUi(this);
    ui->textBrowser->setHtml("<center>MINI MERCADO FONSECA</center>");
}

ReciboDialog::~ReciboDialog()
{
    delete ui;
}

void ReciboDialog::print()
{
    QPrinter printer;
    QPrintDialog *d = new QPrintDialog(&printer);
    if (d->exec() == QDialog::Accepted) {

        ui->textBrowser->print(&printer);
    }
}
