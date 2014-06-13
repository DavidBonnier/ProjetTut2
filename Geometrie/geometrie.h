#ifndef GEOMETRIE_H
#define GEOMETRIE_H

#include <QMainWindow>

namespace Ui {
class Geometrie;
}

class Geometrie : public QMainWindow
{
    Q_OBJECT

public:
    Geometrie(QWidget *parent = 0);
    ~Geometrie();

private:
    Ui::Geometrie *ui;
};

#endif // GEOMETRIE_H
