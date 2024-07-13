#ifndef CLIENTGUIABSTRACTION_H
#define CLIENTGUIABSTRACTION_H

#include <QMainWindow>

namespace Ui {
class ClientGUIAbstraction;
}

class ClientGUIAbstraction : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClientGUIAbstraction(QWidget *parent = nullptr);
    ~ClientGUIAbstraction();

private:
    Ui::ClientGUIAbstraction *ui;
};

#endif // CLIENTGUIABSTRACTION_H
