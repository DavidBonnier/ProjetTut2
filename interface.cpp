#include "interface.h"
#include "ui_interface.h"

Interface::Interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);

    m_geometrie = new Geometrie();
    m_geometrie->hide();

    ui->graphicsView->setScene(m_geometrie->getScene());
}

Interface::~Interface()
{
    delete ui;
}
