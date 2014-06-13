#include "geometrie.h"
#include "ui_geometrie.h"

Geometrie::Geometrie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Geometrie)
{
    ui->setupUi(this);
}

Geometrie::~Geometrie()
{
    delete ui;
}
