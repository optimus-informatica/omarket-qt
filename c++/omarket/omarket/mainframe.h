#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QMainWindow>
#include <QSettings>
#include <QtCore>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <logindialog.h>
#include <produtosdialog.h>
#include <caixaform.h>

namespace Ui {
class MainFrame;
}

class MainFrame : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainFrame(QWidget *parent = nullptr);
    ~MainFrame();

private:
    Ui::MainFrame *ui;
    LoginDialog *loginDialog;
    ProdutosDialog *produtosDialog;
    CaixaForm *caixaForm;
    QSettings *settings;

private slots:
    void logonAccept();
    void logonReject();
    void openProdutos();
};

#endif // MAINFRAME_H
