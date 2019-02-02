#include <QtWidgets>
#include <QLabel>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainscene.h"
#include "mapcolorga.h"
#include <iostream>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    ui->setupUi(this);

    scene = new MainScene(ui->menuItem);
    sceneScale = 100;

    scene->setSceneRect(QRectF(0, 0, 3000, 3000));
    connect(scene, SIGNAL(itemInserted(EllipseItem*)), this, SLOT(itemInserted()));

    ui->graphicsView->setScene(scene);
    setUnifiedTitleAndToolBarOnMac(true);
    setFixedSize(1099, 609);

    colorButtons.insert(0, ui->cbRed);
    colorButtons.insert(1, ui->cbBlue);
    colorButtons.insert(2, ui->cbYellow);
    colorButtons.insert(3, ui->cbGreen);
    colorButtons.insert(4, ui->cbMagenta);
    colorButtons.insert(5, ui->cbCyan);
    colorButtons.insert(6, ui->cbGray);
    colorButtons.insert(7, ui->cbDarkYellow);
    colorButtons.insert(8, ui->cbDarkRed);
    colorButtons.insert(9, ui->cbBlack);

    // Adicionando signals e slots
    connectSignalsAndSlots();
    center(this, 1099, 609);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::actionGroupClicked(QAction *action)
{
    int id = action->data().toInt();

    switch(id) {
        case MainScene::InsertItem:
            scene->setMode(MainScene::InsertItem);
            break;
        case MainScene::InsertLine:
            scene->setMode(MainScene::InsertLine);
            break;
        case MainScene::MoveItem:
            scene->setMode(MainScene::MoveItem);
            break;
        default:
            break;
    }
}

void MainWindow::deleteItem()
{
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        if (item->type() == EllipseItem::Type) {
            qgraphicsitem_cast<EllipseItem *>(item)->removeArrows();
        }
        scene->removeItem(item);
        scene->setItemColor(-1);

        // if all items were deleted, clear the adjancency matrix and set the vertices to zero
        if(scene->items().isEmpty())
            clearScene();
    }
}

void MainWindow::itemInserted()
{
    scene->setMode(MainScene::Mode());
}

void MainWindow::connectSignalsAndSlots() {
    connect(ui->actionZoom_In, SIGNAL(triggered()), this, SLOT(onZoomIn()));
    connect(ui->actionZoom_Out, SIGNAL(triggered()), this, SLOT(onZoomOut()));

    actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->actionVertex);
    actionGroup->addAction(ui->actionEdge);
    actionGroup->addAction(ui->actionSelect);

    connect(actionGroup, SIGNAL(triggered(QAction*)), this, SLOT(actionGroupClicked(QAction*)));

    connect(ui->actionSobre, SIGNAL(triggered()), this, SLOT(about()));
    connect(ui->actionDelete, SIGNAL(triggered()), this, SLOT(deleteItem()));
    connect(ui->actionBringToFront, SIGNAL(triggered()), this, SLOT(bringToFront()));
    connect(ui->actionSendToBack, SIGNAL(triggered()), this, SLOT(sendToBack()));
    connect(ui->actionMapaBrasil, SIGNAL(triggered()), this, SLOT(drawBrMap()));

    connect(ui->buttonSolution, SIGNAL(clicked()), this, SLOT(generateSolution()));
    connect(ui->buttonClearAll, SIGNAL(clicked()), this, SLOT(clearLineEdits()));
    connect(ui->actionClearScene, SIGNAL(triggered()), this, SLOT(clearScene()));
}

void MainWindow::onZoomIn()
{
    sceneScale += 25;

    if (sceneScale >= 175) {
        sceneScale = 175;
    }

    double newScale = sceneScale / 100.0;
    QMatrix oldMatrix = ui->graphicsView->matrix();
    ui->graphicsView->resetMatrix();
    ui->graphicsView->translate(oldMatrix.dx(), oldMatrix.dy());
    ui->graphicsView->scale(newScale, newScale);
}

void MainWindow::onZoomOut()
{
    sceneScale -= 25;

    if (sceneScale <= 25) {
        sceneScale = 25;
    }

    double newScale = sceneScale / 100.0;
    QMatrix oldMatrix = ui->graphicsView->matrix();
    ui->graphicsView->resetMatrix();
    ui->graphicsView->translate(oldMatrix.dx(), oldMatrix.dy());
    ui->graphicsView->scale(newScale, newScale);
}

void MainWindow::bringToFront()
{
    if (scene->selectedItems().isEmpty())
        return;

    QGraphicsItem *selectedItem = scene->selectedItems().first();
    QList<QGraphicsItem *> overlapItems = selectedItem->collidingItems();

    qreal zValue = 0;
    foreach (QGraphicsItem *item, overlapItems) {
        if (item->zValue() >= zValue &&
            item->type() == EllipseItem::Type)
            zValue = item->zValue() + 0.1;
    }
    selectedItem->setZValue(zValue);
}

void MainWindow::sendToBack()
{
    if (scene->selectedItems().isEmpty())
        return;

    QGraphicsItem *selectedItem = scene->selectedItems().first();
    QList<QGraphicsItem *> overlapItems = selectedItem->collidingItems();

    qreal zValue = 0;
    foreach (QGraphicsItem *item, overlapItems) {
        if (item->zValue() <= zValue &&
            item->type() == EllipseItem::Type)
            zValue = item->zValue() - 0.1;
    }
    selectedItem->setZValue(zValue);
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("About GA Map Coloured"),
                       QString::fromUtf8("<b>GA Map Color</b> is a simple application"
                          "that demonstrates the use of genetic algorithm for colouring graphs"));

}

void MainWindow::center(QWidget *widget, int w, int h)
{
    int x, y;
    int screenWidth;
    int screenHeight;

    QDesktopWidget *desktop = QApplication::desktop();

    screenWidth = desktop->width();
    screenHeight = desktop->height();

    x = (screenWidth - w) / 2;
    y = (screenHeight - h) / 2;

    widget->move( x, y );
}

void MainWindow::clearLineEdits() {
    ui->lineEditCrossings->setText("");
    ui->lineEditMutations->setText("");
    ui->lineEditGenerations->setText("");
    ui->lineEditInitPop->setText("");
    ui->cbBlack->setChecked(false);
    ui->cbBlue->setChecked(false);
    ui->cbCyan->setChecked(false);
    ui->cbDarkRed->setChecked(false);
    ui->cbDarkYellow->setChecked(false);
    ui->cbGray->setChecked(false);
    ui->cbGray->setChecked(false);
    ui->cbGreen->setChecked(false);
    ui->cbMagenta->setChecked(false);
    ui->cbRed->setChecked(false);
    ui->cbYellow->setChecked(false);
}

void MainWindow::generateSolution() {
    ui->actionVertex->setChecked(false);
    ui->actionSelect->setChecked(true);

    scene->setMode(MainScene::MoveItem);
    MapColorGA myGA;

    progressDialog = new QProgressDialog("Task in progress...", "Cancel", 0, myGA.getGenerations(), this);
    progressDialog->setWindowModality(Qt::WindowModal);
    progressDialog->setMinimum(0);
    progressDialog->setMaximum(0);

    int count = 0;
    vector<int> colors;
    int id = 0;

    // pega cores selecionadas
    foreach(QAbstractButton *item, colorButtons) {
        if(item->isChecked()) {
            count++;
            colors.push_back(id);
        }
        id++;
    }

    myGA.setColors(colors); // setando cores selecionadas nos checkBox's

    // setando cruzamentos, mutações, gerações, cores e populacação inicial
    myGA.setCrossing(ui->lineEditCrossings->text().toInt());
    myGA.setMutations(ui->lineEditMutations->text().toInt());
    myGA.setGenerations(ui->lineEditGenerations->text().toInt());
    myGA.setInitPop(ui->lineEditInitPop->text().toInt());

    bool check = ui->lineEditCrossings->text().isEmpty() || ui->lineEditGenerations->text().isEmpty() ||
                       ui->lineEditInitPop->text().isEmpty() || ui->lineEditMutations->text().isEmpty();;

    if(count == 0) QMessageBox::about(this, "Alert!", "Select at least one colour!");
    else if(check) QMessageBox::about(this, "Alert!", "Fill out all the fields!");
    else if(scene->items().isEmpty()) QMessageBox::about(this, "Alert!", "Draw a graph or insert one using the Examples menu");
    else {
        ui->lbVertices->setText(QString::number(scene->getTotalVertices()));
        ui->lbEdges->setText(QString::number(scene->getTotalEdges()));

        myGA.setMyGenes(scene->getTotalVertices());

        srand(static_cast<unsigned int> (time(nullptr)));
        myGA.initPopulation(); // inicia população aleatoriamente e calcula os fitness iniciais

        multimap<int, string>::reverse_iterator it = myGA.getMyPopulation().rbegin();

        // loop das gerações
        int i;

        for(i = 0; i < myGA.getGenerations(); i++) {
            progressDialog->setValue(i);

            if (progressDialog->wasCanceled())
                break;

            myGA.crossing();    // realiza cruzamentos e calcula os fitness dos filhos
            myGA.mutation();    // realiza mutação e recalcula os fitness dos filhos
            myGA.selection();   // realiza seleção e inserção dos novos filhos na população inicial

            //myGA.printParcialResult(i); // imprime população parcial

            // com essa condição, o programa irá parar ao encontrar o primeiro fitness máximo
            // sem ela, toda a população final estará com fitness máximo
            if(scene->getAdjMatrix().size() == static_cast<unsigned int>(it->first)) break;
        }
        //myGA.printPopulation(i); // imprime população final

        /// colorindo grafo com cromossomo de maior fitness
        string str = it->second;
        unsigned long int j = it->second.size() - 1;
        ui->lbFinalFit->setText(QString::number(it->first));
        QList<QGraphicsItem *> items = scene->items();

        foreach(QGraphicsItem *item, scene->items()) {
            if (item->type() == EllipseItem::Type) {
                item->setSelected(true);
                scene->setItemColor(str[j--] - 48);
                item->setSelected(false);
            }
        }
        scene->setItemColor(-1);
        QString result;

        if(it->first == scene->getTotalEdges()*2) result = "I found an optimum solution at " + QString::number(i+1) + "ª generation!";
        else result = "I could not find any optimum solution!";

        QMessageBox::about(this, "Final Result", result);
        ui->actionCromossomo_final->setEnabled(true);

        progressDialog->setMaximum(myGA.getGenerations());
    }
}

void MainWindow::clearScene() {
    scene->setItemColor(-1);
    scene->myAdjMatrix.clear();
    scene->setTotalVertices(0);
    scene->setTotalEdges(0);
    scene->clear();
    ui->lbEdges->setText("0");
    ui->lbFinalFit->setText("0");
    ui->lbVertices->setText("0");
}
