#include "geometrie.h"
#include "ui_geometrie.h"

Geometrie::Geometrie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Geometrie)
{
    ui->setupUi(this);

    m_sceneDessin = new SceneDessin();

    ui->graphicsView->setScene(m_sceneDessin);
}

Geometrie::~Geometrie()
{
    delete ui;
}
