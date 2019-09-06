#include "mainframe.h"
#include "ui_mainframe.h"

MainFrame::MainFrame(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainFrame)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setPort(5432);
    db.setUserName("omarket");
    db.setDatabaseName("o_market");

    if (!db.open()) {
        qDebug() << " ERRO " << db.lastError();
    }

    settings = new QSettings;
    loginDialog = new LoginDialog(settings, this);
    produtosDialog = new ProdutosDialog(this);

    connect(loginDialog, &LoginDialog::accepted, this, &MainFrame::logonAccept);
    connect(loginDialog, &LoginDialog::rejected, this, &MainFrame::logonReject);


    loginDialog->show();
    ui->tabs->clear();
    ui->tabs->addTab(new CaixaForm(), "Caixa");
}

MainFrame::~MainFrame()
{
    delete ui;
}


// SLOTS
void MainFrame::logonAccept()
{
    qDebug() << settings->value("session/usuarioid");
}

void MainFrame::logonReject()
{
    this->close();
}

void MainFrame::openProdutos()
{
    produtosDialog->show();
}
