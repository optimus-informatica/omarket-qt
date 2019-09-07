#ifndef RECIBODIALOG_H
#define RECIBODIALOG_H

#include <QDialog>
#include <QPrinter>
#include <QtCore>
#include <QPainter>

namespace Ui {
class ReciboDialog;
}

class ReciboDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReciboDialog(QWidget *parent = nullptr);
    ~ReciboDialog();

private:
    Ui::ReciboDialog *ui;
    QString jcenter(QString t);
    QString hl();

private slots:
    void print();
};

#endif // RECIBODIALOG_H
