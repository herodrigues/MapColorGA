#include "arrow.h"
#include <QtWidgets>

Arrow::Arrow(EllipseItem *startItem, EllipseItem *endItem,
         QGraphicsItem *parent) : QGraphicsLineItem(parent)
{
    myStartItem = startItem;
    myEndItem = endItem;
    setFlag(QGraphicsItem::ItemIsSelectable, true);
    myColor = Qt::black;

    setPen(QPen(myColor, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
}

QRectF Arrow::boundingRect() const {
    qreal extra = (pen().width() + 20) / 2.0;

        return QRectF(line().p1(), QSizeF(line().p2().x() - line().p1().x(),
                                          line().p2().y() - line().p1().y()))
            .normalized()
            .adjusted(-extra, -extra, extra, extra);
}

QPainterPath Arrow::shape() const
{
    QPainterPath path = QGraphicsLineItem::shape();
    return path;
}

void Arrow::updatePosition()
{
    QLineF line(mapFromItem(myStartItem, 0, 0), mapFromItem(myEndItem, 0, 0));
    setLine(line);
}

void Arrow::paint(QPainter *painter, const QStyleOptionGraphicsItem *,
          QWidget *)
{
    if (myStartItem->collidesWithItem(myEndItem))
        return;

    QPen myPen = pen();
    myPen.setColor(myColor);
    painter->setPen(myPen);
    painter->setBrush(myColor);

    QLineF centerLine(myStartItem->pos(), myEndItem->pos());
    QPolygonF endPolygon = myEndItem->polygon();
    QPointF p1 = endPolygon.first() + myEndItem->pos();
    QPointF p2;
    QPointF intersectPoint;
    QLineF polyLine;
    for (int i = 1; i < endPolygon.count(); ++i) {
        p2 = endPolygon.at(i) + myEndItem->pos();
        polyLine = QLineF(p1, p2);
        QLineF::IntersectType intersectType =
            polyLine.intersect(centerLine, &intersectPoint);
        if (intersectType == QLineF::BoundedIntersection)
            break;
            p1 = p2;
    }
    setLine(QLineF(intersectPoint, myStartItem->pos()));

    painter->drawLine(line());
    if (isSelected()) {
        painter->setPen(QPen(myColor, 1, Qt::DashLine));
        QLineF myLine = line();
        myLine.translate(0, 4.0);
        painter->drawLine(myLine);
        myLine.translate(0,-8.0);
        painter->drawLine(myLine);
    }
}
