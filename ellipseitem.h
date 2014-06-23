/****************************************************************************
** Aplicação utilizando algoritmos genéticos, foi utilizada como critério
** de avaliação para a disciplina de Inteligẽncia Artificial
**
** Ciência da Computação
** Universidade Federal do Tocantins - UFT/Palmas
**
** MapColorGA foi desenvolvido para a demonstração de algoritmos genéticos
** para resolver o problema de coloração de grafos.
** A parte interativa foi baseada no exemplo que a Nokia disponibiliza
** juntamente com o Qt e pode ser acessada neste link:
** http://doc.qt.nokia.com/4.7-snapshot/graphicsview-diagramscene.html
**
** Peço se você for utilizar este software mantenha o nome dos autores.
** Se for alterá-lo, adicione seu nome e mande um e-mail para
** herynson@gmail.com descrevendo as alterações.
**
**
** Desenvolvido por:
**                   Herinson Rodrigues
**                   Marcos Raylan
**
** Contato: Herinson Rodrigues (herynson@gmail.com)
**          Marcos Raylan (marcos_raylan@hotmail.com)
**
**
****************************************************************************/

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

