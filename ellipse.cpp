#include "ellipse.h"


Ellipse::Ellipse(QObject *parent) :
    QObject(parent), QGraphicsItem()
{

}

Ellipse::~Ellipse()
{

}

void Ellipse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(QBrush(QColor(138,43,226)));
    painter->drawRect(QRectF(50,50,60,60));

}

QRectF Ellipse::boundingRect() const
{

    return QRectF(-30,-30,60,60);
}
