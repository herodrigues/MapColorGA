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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <vector>
#include <string>
#include "ellipseitem.h"

using namespace std;

class MainScene;

QT_BEGIN_NAMESPACE
class QAction;
class QToolBox;
class QSpinBox;
class QComboBox;
class QFontComboBox;
class QButtonGroup;
class QLineEdit;
class QGraphicsTextItem;
class QFont;
class QToolButton;
class QAbstractButton;
class QGraphicsView;
QT_END_NAMESPACE

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    MainScene *scene;
    Ui::MainWindow *ui;

private slots:
    void bringToFront();
    void sendToBack();
    void itemInserted();
    void deleteItem();
    void sceneScaleChanged(const QString &scale);
    void about();
    void mainButtonGroupClicked(int id);
    void clearLineEdits();
    void generateSolution();
    void clearScene();
    void drawBrMap();

protected:
    void changeEvent(QEvent *e);

private:
    void connectSignalsAndSlots();
    void center(QWidget *widget, int w, int h);

    QList<QAbstractButton *> colorButtons;
    QButtonGroup *mainButtonGroup;

};

#endif // MAINWINDOW_H

