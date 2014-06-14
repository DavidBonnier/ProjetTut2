#include "interface.h"
#include "ui_interface.h"

Interface::Interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);

    Geometrie * yolo = new Geometrie();
    yolo->show();

    ui->graphicsView->setScene(yolo->getScene());
}

Interface::~Interface()
{
    delete ui;
}
