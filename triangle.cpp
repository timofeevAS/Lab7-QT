#include "triangle.h"

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPolygon polygon;
    //polygon << QPoint(0,-40) << QPoint(25,40) << QPoint(-25,40);
    polygon.setPoints(3,-60,-20,30,10,30,-20);
    painter->setBrush(Qt::red);     // Устанавливаем кисть, которой будем отрисовывать объект
    painter->drawPolygon(polygon);
}
