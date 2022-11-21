#ifndef Ellipse_H
#define Ellipse_H

#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QRectF>


class Ellipse :public QObject, public QGraphicsItem
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
