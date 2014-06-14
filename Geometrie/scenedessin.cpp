#include "scenedessin.h"

SceneDessin::SceneDessin(QObject *parent) :
    QGraphicsScene(parent)
{
    addText("Bonjour");
}
