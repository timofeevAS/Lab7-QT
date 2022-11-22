#include "triangle.h"

Triangle::Triangle(int ax,int ay,int bx,int by,int cx,int cy){
    a.setX(ax);a.setY(ay);
    b.setX(bx);b.setY(by);
    c.setX(cx);c.setY(cy);
}
void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPolygon polygon;

    polygon << a << b << c;
    //polygon.setPoints(3,-60,-20,30,10,30,-20);
    painter->setBrush(Qt::red);     // Устанавливаем кисть, которой будем отрисовывать объект
    painter->drawPolygon(polygon);
}

QPainterPath Triangle::shape() const{
    QPainterPath tmp;
    QPolygon pl;
    pl << a << b << c;
    tmp.addPolygon(pl);

    return tmp;
}
