#ifndef VIEWSCENE_H
#define VIEWSCENE_H

#include <QGraphicsView>
#include <QWheelEvent>
#include <QKeyEvent>

class ViewScene : public QGraphicsView
{
    Q_OBJECT
public:
    ViewScene(QWidget *parent = 0);

protected:
    void wheelEvent(QWheelEvent *);
};

#endif // VIEWSCENE_H
