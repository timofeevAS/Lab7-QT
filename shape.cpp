#include "shape.h"

Shape::Shape(QObject *parent) :
    QObject(parent), QGraphicsItem()
{

}

Shape::~Shape()
{

}

void Shape::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(QBrush(QColor(138,43,226)));
    painter->drawRect(-30,-30,60,60);

}

QRectF Shape::boundingRect() const
{

    return QRectF(-30,-30,60,60);
}
