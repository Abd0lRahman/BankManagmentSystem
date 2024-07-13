#include "ClientGUIAbstraction.h"
#include "ui_ClientGUIAbstraction.h"

ClientGUIAbstraction::ClientGUIAbstraction(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientGUIAbstraction)
{
    ui->setupUi(this);
}

ClientGUIAbstraction::~ClientGUIAbstraction()
{
    delete ui;
}
