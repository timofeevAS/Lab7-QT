#include "ellipse.h"

void Ellipse::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(QBrush(QColor(138,43,226)));
    painter->drawEllipse(QRectF(-30,-30,60,60));
}
