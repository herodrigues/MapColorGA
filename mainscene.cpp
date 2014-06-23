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

#include <QtWidgets>

#include "mainscene.h"
#include "arrow.h"
#include <iostream>

multimap<int, int> MainScene::myAdjMatrix = multimap<int, int>();

MainScene::MainScene(QMenu *itemMenu, QObject *parent)
    : QGraphicsScene(parent)
{
    totalVertices = 0;
    totalEdges = 0;
    myItemMenu = itemMenu;
    myMode = MoveItem;
    line = 0;
    myItemColor = Qt::white;

    myAdjMatrix.clear();
}

void MainScene::setMode(Mode mode)
{
    myMode = mode;
}

bool MainScene::isItemChange(int type)
{
    foreach (QGraphicsItem *item, selectedItems()) {
        if (item->type() == type)
            return true;
    }
    return false;
}

void MainScene::setItemColor(int numColor)
{
    switch(numColor) {
        case 0: myItemColor = QColor(Qt::red);        break;
        case 1: myItemColor = QColor(Qt::blue);       break;
        case 2: myItemColor = QColor(Qt::yellow);     break;
        case 3: myItemColor = QColor(Qt::green);      break;
        case 4: myItemColor = QColor(Qt::magenta);    break;
        case 5: myItemColor = QColor(Qt::cyan);       break;
        case 6: myItemColor = QColor(Qt::lightGray);  break;
        case 7: myItemColor = QColor(Qt::darkYellow); break;
        case 8: myItemColor = QColor(160, 0, 0);    break;
        case 9: myItemColor = QColor(Qt::black);      break;
        case -1: myItemColor = QColor(Qt::white);     break;
        default: break;
    }

    if (isItemChange(EllipseItem::Type)) {
        EllipseItem *item = qgraphicsitem_cast<EllipseItem *>(selectedItems().first());
        item->setBrush(myItemColor);
    }
}

void MainScene::mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    if (mouseEvent->button() != Qt::LeftButton)
        return;

    EllipseItem *item;

    switch (myMode) {
        case InsertItem:
            item = new EllipseItem(myItemMenu, totalVertices);
            item->setBrush(myItemColor);
            addItem(item);
            item->setPos(mouseEvent->scenePos());
            totalVertices++;
            emit itemInserted(item);
            break;
        case InsertLine:
            line = new QGraphicsLineItem(QLineF(mouseEvent->scenePos(),
                                        mouseEvent->scenePos()));
            line->setPen(QPen(Qt::black, 2));
            addItem(line);
            break;
        default:;
    }
    QGraphicsScene::mousePressEvent(mouseEvent);
}

void MainScene::mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    if (myMode == InsertLine && line != 0) {
        QLineF newLine(line->line().p1(), mouseEvent->scenePos());
        line->setLine(newLine);
    } else if (myMode == MoveItem) {
        QGraphicsScene::mouseMoveEvent(mouseEvent);
    }
}

void MainScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent)
{
    if (line != 0 && myMode == InsertLine) {

        QList<QGraphicsItem *> startItems = items(line->line().p1());
        if (startItems.count() && startItems.first() == line)
            startItems.removeFirst();
        QList<QGraphicsItem *> endItems = items(line->line().p2());
        if (endItems.count() && endItems.first() == line)
            endItems.removeFirst();

        removeItem(line);
        delete line;

        if (startItems.count() > 0 && endItems.count() > 0 &&
            startItems.first()->type() == EllipseItem::Type &&
            endItems.first()->type() == EllipseItem::Type &&
            startItems.first() != endItems.first()) {
            EllipseItem *startItem =
                qgraphicsitem_cast<EllipseItem *>(startItems.first());
            EllipseItem *endItem =
                qgraphicsitem_cast<EllipseItem *>(endItems.first());
            Arrow *arrow = new Arrow(startItem, endItem);
            arrow->setColor(Qt::black);
            startItem->addArrow(arrow);
            endItem->addArrow(arrow);
            arrow->setZValue(-1000.0);
            addItem(arrow);
            arrow->updatePosition();

            startItem->setSelected(false);

            myAdjMatrix.insert( pair<int, int>(startItem->getId(), endItem->getId()) );
            myAdjMatrix.insert( pair<int, int>(endItem->getId(), startItem->getId()) );
        }
    }
    line = 0;
    QGraphicsScene::mouseReleaseEvent(mouseEvent);
}

