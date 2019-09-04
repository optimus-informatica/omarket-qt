#include "mainframe.h"
#include "ui_mainframe.h"

MainFrame::MainFrame(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainFrame)
{
    ui->setupUi(this);
    loginDialog = new LoginDialog(this);
    connect(loginDialog, &LoginDialog::accepted, this, &MainFrame::logonAccept);
    connect(loginDialog, &LoginDialog::rejected, this, &MainFrame::logonReject);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("omarket");

    if (!db.open()) {
        qDebug() << db.lastError();
    }

    loginDialog->show();
}

MainFrame::~MainFrame()
{
    delete ui;
}


// SLOTS
void MainFrame::logonAccept()
{}

void MainFrame::logonReject()
{
    qDebug() << "REJECT";
    this->close();
}
