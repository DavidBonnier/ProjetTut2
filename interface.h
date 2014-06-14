#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>

#include "geometrie.h"

namespace Ui {
class Interface;
}

class Interface : public QMainWindow
{
    Q_OBJECT

public:
    Interface(QWidget *parent = 0);
    ~Interface();

private:
    Ui::Interface *ui;
    Geometrie * m_geometrie;
};

#endif // INTERFACE_H
