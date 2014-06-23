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

void MainWindow::mainButtonGroupClicked(int id)
{
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

        // se todos os items selecionados forem deletados, 'limpar' a matriz de adjacencia e zerar a contagem dos vertices
        if(scene->items().isEmpty())
            clearScene();
    }
}

void MainWindow::itemInserted()
{
    scene->setMode(MainScene::Mode(mainButtonGroup->checkedId()));
}

void MainWindow::connectSignalsAndSlots() {
    QStringList scales;
    scales << tr("50%") << tr("75%") << tr("100%") << tr("125%") << tr("150%");

    ui->zoomComboBox->addItems(scales);
    ui->zoomComboBox->setCurrentIndex(2);

    connect(ui->zoomComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(sceneScaleChanged(QString)));

    mainButtonGroup = new QButtonGroup;
    mainButtonGroup->addButton(ui->radioButtonItem, int(MainScene::InsertItem));
    mainButtonGroup->addButton(ui->radioButtonEdge, int(MainScene::InsertLine));
    mainButtonGroup->addButton(ui->radioButtonPointer, int(MainScene::MoveItem));

    connect(mainButtonGroup, SIGNAL(buttonClicked(int)), this, SLOT(mainButtonGroupClicked(int)));

    connect(ui->buttonSendFront, SIGNAL(clicked()), this, SLOT(bringToFront()));
    connect(ui->buttonSendBack, SIGNAL(clicked()), this, SLOT(sendToBack()));
    connect(ui->buttonDelete, SIGNAL(clicked()), this, SLOT(deleteItem()));

    connect(ui->actionSobre, SIGNAL(triggered()), this, SLOT(about()));
    connect(ui->actionDeletar, SIGNAL(triggered()), this, SLOT(deleteItem()));
    connect(ui->actionTrazer_para_frente, SIGNAL(triggered()), this, SLOT(bringToFront()));
    connect(ui->actionLevar_para_tr_s, SIGNAL(triggered()), this, SLOT(sendToBack()));
    connect(ui->actionMapaBrasil, SIGNAL(triggered()), this, SLOT(drawBrMap()));

    connect(ui->buttonSolution, SIGNAL(clicked()), this, SLOT(generateSolution()));
    connect(ui->buttonClearAll, SIGNAL(clicked()), this, SLOT(clearLineEdits()));
    connect(ui->buttonClearScene, SIGNAL(clicked()), this, SLOT(clearScene()));
}

void MainWindow::sceneScaleChanged(const QString &scale)
{
    double newScale = scale.left(scale.indexOf(tr("%"))).toDouble() / 100.0;
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
    QMessageBox::about(this, tr("Sobre GA Map Color"),
                       QString::fromUtf8("<b>GA Map Color</b> mostra um exemplo "
                          "simples de aplicação para coloração de grafos utilizando algoritmos genéticos"));

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
    ui->radioButtonItem->setChecked(false);
    ui->radioButtonPointer->setChecked(true);

    scene->setMode(MainScene::MoveItem);
    MapColorGA myGA;

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

    if(count == 0) QMessageBox::about(this, "Alerta!", "Selecione ao menos 1 cor!");
    else if(check) QMessageBox::about(this, "Alerta!", "Preencha todos os campos!");
    else if(scene->items().isEmpty()) QMessageBox::about(this, "Alerta!", "Desenhe um grafo ou insira um modelo no menu Exemplos");
    else {
        ui->lbVertices->setText(QString::number(scene->getTotalVertices()));
        ui->lbEdges->setText(QString::number(scene->getTotalEdges()));

        myGA.setMyGenes(scene->getTotalVertices());

        srand(time(NULL));
        myGA.initPopulation(); // inicia população aleatoriamente e calcula os fitness iniciais

        multimap<int, string>::reverse_iterator it = myGA.getMyPopulation().rbegin();

        // loop das gerações
        int i;

        for(i = 0; i < myGA.getGenerations(); i++) {
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
        int j = it->second.size()-1;
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

        if(it->first == scene->getTotalEdges()*2) result = "Achei a solução ótima na " + QString::number(i+1) + "ª geração!";
        else result = "Não achei solução ótima!";

        QMessageBox::about(this, "Resultado", result);
        ui->actionCromossomo_final->setEnabled(true);
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

