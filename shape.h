#ifndef SHAPE_H
#define SHAPE_H

#include <QObject>
#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>

class Shape : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    static int Z_coord;
    explicit Shape(QObject *parent = 0);
    ~Shape();

signals:

private:

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

};


#endif // SHAPE_H
