#ifndef ARROW_H
#define ARROW_H

#include <QGraphicsLineItem>

#include "ellipseitem.h"

QT_BEGIN_NAMESPACE
class QGraphicsPolygonItem;
class QGraphicsLineItem;
class QGraphicsScene;
class QRectF;
class QGraphicsSceneMouseEvent;
class QPainterPath;
QT_END_NAMESPACE

class Arrow : public QGraphicsLineItem
{
public:
    enum { Type = UserType + 4 };

    Arrow(EllipseItem *startitem, EllipseItem* endItem, QGraphicsItem *parent = 0);

    int type() const
        { return Type; }
    QRectF boundingRect() const;
    QPainterPath shape() const;
    void setColor(const QColor &color)
        { myColor = color; }
    EllipseItem *getStartItem() const
        { return myStartItem; }
    EllipseItem *getEndItem() const
        { return myEndItem; }

public slots:
    void updatePosition();

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);

private:
    EllipseItem *myStartItem;
    EllipseItem *myEndItem;
    QColor myColor;
};

#endif // ARROW_H

