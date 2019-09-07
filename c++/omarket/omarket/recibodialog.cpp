#include "recibodialog.h"
#include "ui_recibodialog.h"

#include <QPrintDialog>

ReciboDialog::ReciboDialog(QWidget *parent) : QDialog(parent), ui(new Ui::ReciboDialog)
{
    ui->setupUi(this);
    ui->notepad->setPlainText("MINI MERCADO FONSECA");
}

ReciboDialog::~ReciboDialog()
{
    delete ui;
}

void ReciboDialog::print()
{
    QString empresa = "Mini mercado Fonseca";
    QString cnpj = "00.000.000/0000-00";
    QString addr = "Av. Inacio fonseca";
    QString id = "000-000-000-000-000";
    QString date = "00/00/00 00:00:00";

    QString printname = "PERTO-PRINTER-TEC";
    QStringList args;
    args.append("-d");
    args.append(printname);


    QStringList document;
    document.append(jcenter(empresa));
    document.append(jcenter(cnpj));
    document.append(jcenter(addr));
    document.append(jcenter(date));
    document.append(jcenter(id));

    QString data;

    QTemporaryFile temp;
    //temp.setAutoRemove(false);
    if (temp.open()) {
        QTextStream stream(&temp);
        for (QString l : document) {
            data.append(l);
            stream << l;
        }
        stream << hl();
        data.append(hl());
        ui->notepad->setPlainText(data);

        for (int i=0; i<10; i++) stream << " \n";
        temp.close();
        args.append(temp.fileName());
        QProcess *p = new QProcess;
        //p->start("lp", args);
        qDebug() << args;
    }
}

QString ReciboDialog::jcenter(QString t) {
    int s = ((45/2) - (t.length() / 2)) + t.length();
    return t.rightJustified(s, ' ').toUpper().append("\n");
}

QString ReciboDialog::hl()
{
    QString l = "_";
    return l.rightJustified(45, '_').append("\n");
}
