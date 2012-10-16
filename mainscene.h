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

#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QGraphicsScene>
#include "ellipseitem.h"
#include <vector>
#include <string>
#include <map>
#include <utility>

using namespace std;

QT_BEGIN_NAMESPACE
class QGraphicsSceneMouseEvent;
class QMenu;
class QPointF;
class QGraphicsLineItem;
class QFont;
class QGraphicsTextItem;
class QColor;
QT_END_NAMESPACE

class MainScene : public QGraphicsScene
{
    Q_OBJECT

public:
    enum Mode { InsertItem, InsertLine, MoveItem, SendToFront, SendToBack };
    MainScene(QMenu *itemMenu, QObject *parent = 0);

    static multimap<int, int> myAdjMatrix;

    static multimap<int, int> getAdjMatrix()
        { return myAdjMatrix; }
    void setTotalVertices(int v)
        { totalVertices = v; }
    void setTotalEdges(int e)
        { totalEdges = e; }
    int getTotalEdges() const
        { return (myAdjMatrix.size() % 2) ? myAdjMatrix.size()/2 +1 : myAdjMatrix.size()/2 ; }
    int getTotalVertices() const
        { return totalVertices; }
    QColor itemColor() const
        { return myItemColor; }
    void setItemColor(int numColor);

public slots:
    void setMode(Mode mode);

signals:
    void itemInserted(EllipseItem *item);
    void itemSelected(QGraphicsItem *item);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent);

private:
    void insertConnectionAdjMatrix(int id1, int id2);
    bool isItemChange(int type);

    QMenu *myItemMenu;
    Mode myMode;
    bool leftButtonDown;
    QPointF startPoint;
    QGraphicsLineItem *line;
    QColor myItemColor;
    int totalVertices;
    int totalEdges;
};

#endif // MAINSCENE_H

