#include "viewscene.h"

ViewScene::ViewScene(QWidget *parent) :
    QGraphicsView(parent)
{
}

void ViewScene::wheelEvent(QWheelEvent* event)
{
    if(event->modifiers() == Qt::ControlModifier)
    {
        setTransformationAnchor(QGraphicsView::AnchorUnderMouse);

        // Scale the view / do the zoom
        double scaleFactor = 1.15;
        if(event->delta() > 0)
        {
            // Zoom in
            scale(scaleFactor, scaleFactor);
        }
        else
        {
            // Zooming out
            scale(1.0 / scaleFactor, 1.0 / scaleFactor);
        }
    }
    else
       QAbstractScrollArea::wheelEvent(event);
}
