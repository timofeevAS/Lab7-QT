#include "myrect.h"

void MyRect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(QBrush(QColor(138,43,226)));
    painter->drawRect(-30,-30,60,60);

}

