#ifndef Triangle_H
#define Triangle_H

#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>
#include <QPolygon>
#include <QPoint>
#include "shape.h"

class Triangle :public Shape
{
    Q_OBJECT
public:
    Triangle(int ax,int ay,int bx,int by,int cx,int cy);
signals:

private:
    QPoint a,b,c;
    QPainterPath shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


};


#endif // Triangle_H
