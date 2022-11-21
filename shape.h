#ifndef SHAPE_H
#define SHAPE_H

#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>

class Shape : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit Shape(QObject *parent = 0);
    ~Shape();

signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


};


#endif // SHAPE_H
