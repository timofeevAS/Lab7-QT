#ifndef myRect_H
#define myRect_H

#include "shape.h"
#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>

class MyRect : public Shape
{
    Q_OBJECT


signals:

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


};


#endif // SHAPE_H
