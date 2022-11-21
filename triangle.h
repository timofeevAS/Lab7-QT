#ifndef Triangle_H
#define Triangle_H

#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QPolygon>
#include "shape.h"

class Triangle :public Shape
{
    Q_OBJECT
public:

signals:

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


};


#endif // Triangle_H
