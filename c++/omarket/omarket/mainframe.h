#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QMainWindow>
#include <QSettings>
#include <QtCore>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <logindialog.h>

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
    QSettings session;
    LoginDialog *loginDialog;

private slots:
    void logonAccept();
    void logonReject();
};

#endif // MAINFRAME_H
