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
    explicit Ellipse(QObject *parent = 0);
    ~Ellipse();

signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


};


#endif // Ellipse_H
