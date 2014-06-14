#ifndef GEOMETRIE_H
#define GEOMETRIE_H

#include <QMainWindow>

#include "scenedessin.h"

namespace Ui {
class Geometrie;
}

class Geometrie : public QMainWindow
{
    Q_OBJECT

public:
    Geometrie(QWidget *parent = 0);
    ~Geometrie();

    SceneDessin * getScene(){return m_sceneDessin;}

private:
    Ui::Geometrie *ui;

    SceneDessin * m_sceneDessin;
};

#endif // GEOMETRIE_H
