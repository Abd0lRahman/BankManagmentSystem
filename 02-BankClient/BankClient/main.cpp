#include "loginPage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginPage w;
    w.show();
    return a.exec();
}
