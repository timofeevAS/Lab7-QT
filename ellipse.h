#ifndef Ellipse_H
#define Ellipse_H

#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include "shape.h"

class Ellipse :public Shape
{
    Q_OBJECT
public:

signals:

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


};


#endif // Ellipse_H
