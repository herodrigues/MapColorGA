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
class QActionGroup;
class QLineEdit;
class QGraphicsTextItem;
class QFont;
class QToolButton;
class QAbstractButton;
class QGraphicsView;
class QProgressDialog;
QT_END_NAMESPACE

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    MainScene *scene;
    Ui::MainWindow *ui;

private slots:
    void bringToFront();
    void sendToBack();
    void itemInserted();
    void deleteItem();
    void onZoomIn();
    void onZoomOut();
    void about();
    void actionGroupClicked(QAction* action);
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
    QActionGroup *actionGroup;
    QProgressDialog *progressDialog;
    int sceneScale;
};

#endif // MAINWINDOW_H

