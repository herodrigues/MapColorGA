#ifndef ELLIPSEITEM_H
#define ELLIPSEITEM_H

#include <QGraphicsPixmapItem>
#include <QList>

QT_BEGIN_NAMESPACE
class QPixmap;
class QGraphicsItem;
class QGraphicsScene;
class QTextEdit;
class QGraphicsSceneMouseEvent;
class QMenu;
class QGraphicsSceneContextMenuEvent;
class QPainter;
class QStyleOptionGraphicsItem;
class QWidget;
class QPolygonF;
QT_END_NAMESPACE

class Arrow;

class EllipseItem : public QGraphicsPolygonItem {

public:
    enum { Type = UserType + 15 };

    EllipseItem(QMenu *contextMenu, int count, QGraphicsItem *parent = 0);

    int getId()
        { return myId; }
    void removeArrow(Arrow *arrow);
    void removeArrows();
    QPolygonF polygon() const
        { return myPolygon; }
    void addArrow(Arrow *arrow);
    int type() const
        { return Type; }
   QPixmap image() const;

protected:
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);

private:
    QPolygonF myPolygon;
    QMenu *myContextMenu;
    QList<Arrow *> arrows;
    int myId;
};

#endif

