#include "shape.h"
#include <mywidgets.h>
#include <QDebug>

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

    return QRectF(-30,-30,60,60 );
}

void Shape::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->setPos(mapToScene(event->pos()));
    if(this->pos().x()>500 || this->pos().x()<-30||this->pos().y()>500 || this->pos().y()<-30){
        delete this;
        qDebug() <<"From borders";
    }
}

void Shape::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->setZValue(++Z_coord);
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    qDebug() << "Press on object";


}

void Shape::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));
}
