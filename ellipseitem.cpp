#include <QtWidgets>

#include "ellipseitem.h"
#include "arrow.h"

EllipseItem::EllipseItem(QMenu *contextMenu, int id, QGraphicsItem *parent) : QGraphicsPolygonItem(parent)
{
    myContextMenu = contextMenu;
    myId = id;

    QPainterPath path;
    path.addEllipse(-17, -17, 35, 35);

    myPolygon = path.toFillPolygon();

    setPolygon(myPolygon);
    setFlag(QGraphicsItem::ItemIsMovable, true);
    setFlag(QGraphicsItem::ItemIsSelectable, true);

}

void EllipseItem::removeArrow(Arrow *arrow) {
    int index = arrows.indexOf(arrow);

    if(index != -1)
        arrows.removeAt(index);
}

void EllipseItem::removeArrows() {
    foreach(Arrow *arrow, arrows) {
        arrow->getStartItem()->removeArrow(arrow);
        arrow->getEndItem()->removeArrow(arrow);
        scene()->removeItem(arrow);
        delete arrow;
    }
}

void EllipseItem::addArrow(Arrow *arrow) {
    arrows.append(arrow);
}

QPixmap EllipseItem::image() const
{
    QPixmap pixmap(250, 250);
    pixmap.fill(Qt::transparent);
    QPainter painter(&pixmap);
    painter.setPen(QPen(Qt::black, 8));
    painter.translate(125, 125);
    painter.drawPolyline(myPolygon);

    return pixmap;
}

void EllipseItem::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    scene()->clearSelection();
    setSelected(true);
    myContextMenu->exec(event->screenPos());
}

QVariant EllipseItem::itemChange(GraphicsItemChange change,
                     const QVariant &value)
{
    if (change == QGraphicsItem::ItemPositionChange) {
        foreach (Arrow *arrow, arrows) {
            arrow->updatePosition();
        }
    }

    return value;
}

