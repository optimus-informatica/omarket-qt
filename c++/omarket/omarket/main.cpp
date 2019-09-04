#include "mainframe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("Optimus Informatica");
    QCoreApplication::setOrganizationDomain("optimus.osasco.br");
    QCoreApplication::setApplicationName("OMarket");
    MainFrame w;
    w.show();

    return a.exec();
}
