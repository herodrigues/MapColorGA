#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainscene.h"
#include <iostream>

void MainWindow::drawBrMap() {
    scene->clear();
    clearScene();

    // ui->zoomComboBox->setCurrentIndex(1);
    scene->setTotalVertices(27);
    scene->setTotalEdges(51);

    // AC
    scene->myAdjMatrix.insert(pair<int, int>(0, 3));
    scene->myAdjMatrix.insert(pair<int, int>(0, 20));
    // AL
    scene->myAdjMatrix.insert(pair<int, int>(1, 15));
    scene->myAdjMatrix.insert(pair<int, int>(1, 4));
    scene->myAdjMatrix.insert(pair<int, int>(1, 24));
    // AP
    scene->myAdjMatrix.insert(pair<int, int>(2, 13));
    // AM
    scene->myAdjMatrix.insert(pair<int, int>(3, 0));
    scene->myAdjMatrix.insert(pair<int, int>(3, 20));
    scene->myAdjMatrix.insert(pair<int, int>(3, 12));
    scene->myAdjMatrix.insert(pair<int, int>(3, 13));
    scene->myAdjMatrix.insert(pair<int, int>(3, 21));
    // BA
    scene->myAdjMatrix.insert(pair<int, int>(4, 8));
    scene->myAdjMatrix.insert(pair<int, int>(4, 10));
    scene->myAdjMatrix.insert(pair<int, int>(4, 7));
    scene->myAdjMatrix.insert(pair<int, int>(4, 24));
    scene->myAdjMatrix.insert(pair<int, int>(4, 1));
    scene->myAdjMatrix.insert(pair<int, int>(4, 15));
    scene->myAdjMatrix.insert(pair<int, int>(4, 16));
    scene->myAdjMatrix.insert(pair<int, int>(4, 26));
    // CE
    scene->myAdjMatrix.insert(pair<int, int>(5, 16));
    scene->myAdjMatrix.insert(pair<int, int>(5, 15));
    scene->myAdjMatrix.insert(pair<int, int>(5, 14));
    scene->myAdjMatrix.insert(pair<int, int>(5, 19));
    // DF
    scene->myAdjMatrix.insert(pair<int, int>(6, 8));
    scene->myAdjMatrix.insert(pair<int, int>(6, 10));
    // ES
    scene->myAdjMatrix.insert(pair<int, int>(7, 4));
    scene->myAdjMatrix.insert(pair<int, int>(7, 18));
    scene->myAdjMatrix.insert(pair<int, int>(7, 10));
    // GO
    scene->myAdjMatrix.insert(pair<int, int>(8, 12));
    scene->myAdjMatrix.insert(pair<int, int>(8, 11));
    scene->myAdjMatrix.insert(pair<int, int>(8, 6));
    scene->myAdjMatrix.insert(pair<int, int>(8, 10));
    scene->myAdjMatrix.insert(pair<int, int>(8, 4));
    scene->myAdjMatrix.insert(pair<int, int>(8, 26));
    // MA
    scene->myAdjMatrix.insert(pair<int, int>(9, 13));
    scene->myAdjMatrix.insert(pair<int, int>(9, 26));
    scene->myAdjMatrix.insert(pair<int, int>(9, 16));
    // MG
    scene->myAdjMatrix.insert(pair<int, int>(10, 8));
    scene->myAdjMatrix.insert(pair<int, int>(10, 11));
    scene->myAdjMatrix.insert(pair<int, int>(10, 6));
    scene->myAdjMatrix.insert(pair<int, int>(10, 25));
    scene->myAdjMatrix.insert(pair<int, int>(10, 18));
    scene->myAdjMatrix.insert(pair<int, int>(10, 7));
    scene->myAdjMatrix.insert(pair<int, int>(10, 4));
    // MS
    scene->myAdjMatrix.insert(pair<int, int>(11, 12));
    scene->myAdjMatrix.insert(pair<int, int>(11, 8));
    scene->myAdjMatrix.insert(pair<int, int>(11, 10));
    scene->myAdjMatrix.insert(pair<int, int>(11, 25));
    scene->myAdjMatrix.insert(pair<int, int>(11, 17));
    // MT
    scene->myAdjMatrix.insert(pair<int, int>(12, 20));
    scene->myAdjMatrix.insert(pair<int, int>(12, 3));
    scene->myAdjMatrix.insert(pair<int, int>(12, 13));
    scene->myAdjMatrix.insert(pair<int, int>(12, 26));
    scene->myAdjMatrix.insert(pair<int, int>(12, 8));
    scene->myAdjMatrix.insert(pair<int, int>(12, 11));
    // PA
    scene->myAdjMatrix.insert(pair<int, int>(13, 3));
    scene->myAdjMatrix.insert(pair<int, int>(13, 21));
    scene->myAdjMatrix.insert(pair<int, int>(13, 2));
    scene->myAdjMatrix.insert(pair<int, int>(13, 9));
    scene->myAdjMatrix.insert(pair<int, int>(13, 26));
    scene->myAdjMatrix.insert(pair<int, int>(13, 12));
    // PB
    scene->myAdjMatrix.insert(pair<int, int>(14, 19));
    scene->myAdjMatrix.insert(pair<int, int>(14, 5));
    scene->myAdjMatrix.insert(pair<int, int>(14, 15));
    // PE
    scene->myAdjMatrix.insert(pair<int, int>(15, 5));
    scene->myAdjMatrix.insert(pair<int, int>(15, 14));
    scene->myAdjMatrix.insert(pair<int, int>(15, 1));
    scene->myAdjMatrix.insert(pair<int, int>(15, 4));
    scene->myAdjMatrix.insert(pair<int, int>(15, 16));
    // PI
    scene->myAdjMatrix.insert(pair<int, int>(16, 9));
    scene->myAdjMatrix.insert(pair<int, int>(16, 5));
    scene->myAdjMatrix.insert(pair<int, int>(16, 15));
    scene->myAdjMatrix.insert(pair<int, int>(16, 4));
    scene->myAdjMatrix.insert(pair<int, int>(16, 26));
    // PR
    scene->myAdjMatrix.insert(pair<int, int>(17, 11));
    scene->myAdjMatrix.insert(pair<int, int>(17, 25));
    scene->myAdjMatrix.insert(pair<int, int>(17, 23));
    // RJ
    scene->myAdjMatrix.insert(pair<int, int>(18, 25));
    scene->myAdjMatrix.insert(pair<int, int>(18, 10));
    scene->myAdjMatrix.insert(pair<int, int>(18, 7));
    // RN
    scene->myAdjMatrix.insert(pair<int, int>(19, 5));
    scene->myAdjMatrix.insert(pair<int, int>(19, 14));
    // RO
    scene->myAdjMatrix.insert(pair<int, int>(20, 0));
    scene->myAdjMatrix.insert(pair<int, int>(20, 12));
    scene->myAdjMatrix.insert(pair<int, int>(20, 3));
    // RR
    scene->myAdjMatrix.insert(pair<int, int>(21, 3));
    scene->myAdjMatrix.insert(pair<int, int>(21, 13));
    // RS
    scene->myAdjMatrix.insert(pair<int, int>(22, 23));
    // SC
    scene->myAdjMatrix.insert(pair<int, int>(23, 17));
    scene->myAdjMatrix.insert(pair<int, int>(23, 22));
    // SE
    scene->myAdjMatrix.insert(pair<int, int>(24, 1));
    scene->myAdjMatrix.insert(pair<int, int>(24, 4));
    // SP
    scene->myAdjMatrix.insert(pair<int, int>(25, 11));
    scene->myAdjMatrix.insert(pair<int, int>(25, 10));
    scene->myAdjMatrix.insert(pair<int, int>(25, 18));
    scene->myAdjMatrix.insert(pair<int, int>(25, 17));
    // TO
    scene->myAdjMatrix.insert(pair<int, int>(26, 13));
    scene->myAdjMatrix.insert(pair<int, int>(26, 9));
    scene->myAdjMatrix.insert(pair<int, int>(26, 16));
    scene->myAdjMatrix.insert(pair<int, int>(26, 4));
    scene->myAdjMatrix.insert(pair<int, int>(26, 8));
    scene->myAdjMatrix.insert(pair<int, int>(26, 12));

    // Acre
    EllipseItem *AC = new EllipseItem(ui->menuItem, 0);
    AC->setBrush(Qt::white);
    AC->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(AC);
    AC->setPos(1158.67, 1386.67);
    QGraphicsTextItem *text = scene->addText("AC", QFont("Times"));
    text->setPos(AC->x()-40, AC->y()-40);

    // Alagoas
    EllipseItem *AL = new EllipseItem(ui->menuItem, 1);
    AL->setBrush(Qt::white);
    AL->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(AL);
    AL->setPos(1729.33, 1396);

    // Amapá
    EllipseItem *AP = new EllipseItem(ui->menuItem, 2);
    AP->setBrush(Qt::white);
    AP->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(AP);
    AP->setPos(1409.33, 1228);

    // Amazonas
    EllipseItem *AM = new EllipseItem(ui->menuItem, 3);
    AM->setBrush(Qt::white);
    AM->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(AM);
    AM->setPos(1272, 1334.67);
    QGraphicsTextItem *text3 = scene->addText("AM", QFont("Times"));
    text3->setPos(AM->x()-40, AM->y()-40);

    // Bahia
    EllipseItem *BA = new EllipseItem(ui->menuItem, 4);
    BA->setBrush(Qt::white);
    BA->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(BA);
    BA->setPos(1618.67, 1460);

    // Ceará
    EllipseItem *CE = new EllipseItem(ui->menuItem, 5);
    CE->setBrush(Qt::white);
    CE->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(CE);
    CE->setPos(1632, 1240);

    // Distrito Federal
    EllipseItem *DF = new EllipseItem(ui->menuItem, 6);
    DF->setBrush(Qt::white);
    DF->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(DF);
    DF->setPos(1497.33, 1553.33);

    // Espírito Santo
    EllipseItem *ES = new EllipseItem(ui->menuItem, 7);
    ES->setBrush(Qt::white);
    ES->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(ES);
    ES->setPos(1673.33, 1601.33);

    // Goiás
    EllipseItem *GO = new EllipseItem(ui->menuItem, 8);
    GO->setBrush(Qt::white);
    GO->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(GO);
    GO->setPos(1504, 1498.67);

    // Maranhão
    EllipseItem *MA = new EllipseItem(ui->menuItem, 9);
    MA->setBrush(Qt::white);
    MA->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(MA);
    MA->setPos(1493.33, 1280);

    // Minas Gerais
    EllipseItem *MG = new EllipseItem(ui->menuItem, 10);
    MG->setBrush(Qt::white);
    MG->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(MG);
    MG->setPos(1569.33, 1576);

    // Mato Grosso do Sul
    EllipseItem *MS = new EllipseItem(ui->menuItem, 11);
    MS->setBrush(Qt::white);
    MS->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(MS);
    MS->setPos(1376, 1608);

    // Mato Grosso
    EllipseItem *MT = new EllipseItem(ui->menuItem, 12);
    MT->setBrush(Qt::white);
    MT->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(MT);
    MT->setPos(1384, 1476);

    // Pará
    EllipseItem *PA = new EllipseItem(ui->menuItem, 13);
    PA->setBrush(Qt::white);
    PA->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(PA);
    PA->setPos(1405.33, 1373.33);
    QGraphicsTextItem *text13 = scene->addText("PA", QFont("Times"));
    text13->setPos(PA->x()+10, PA->y()+20);

    // Paraíba
    EllipseItem *PB = new EllipseItem(ui->menuItem, 14);
    PB->setBrush(Qt::white);
    PB->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(PB);
    PB->setPos(1722.67, 1301.33);

    // Pernambuco
    EllipseItem *PE = new EllipseItem(ui->menuItem, 15);
    PE->setBrush(Qt::white);
    PE->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(PE);
    PE->setPos(1674.67, 1361.33);

    // Piauí
    EllipseItem *PI = new EllipseItem(ui->menuItem, 16);
    PI->setBrush(Qt::white);
    PI->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(PI);
    PI->setPos(1573.33, 1332);

    // Paraná
    EllipseItem *PR = new EllipseItem(ui->menuItem, 17);
    PR->setBrush(Qt::white);
    PR->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(PR);
    PR->setPos(1408, 1721.33);

    // Rio de Janeiro
    EllipseItem *RJ = new EllipseItem(ui->menuItem, 18);
    RJ->setBrush(Qt::white);
    RJ->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(RJ);
    RJ->setPos(1606.67, 1660);

    // Rio Grande do Norte
    EllipseItem *RN = new EllipseItem(ui->menuItem, 19);
    RN->setBrush(Qt::white);
    RN->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(RN);
    RN->setPos(1706.67, 1248);

    // Rondônia
    EllipseItem *RO = new EllipseItem(ui->menuItem, 20);
    RO->setBrush(Qt::white);
    RO->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(RO);
    RO->setPos(1226.67, 1461.33);
    QGraphicsTextItem *text20 = scene->addText("RO", QFont("Times"));
    text20->setPos(RO->x()-40, RO->y()+20);

    // Roraima
    EllipseItem *RR = new EllipseItem(ui->menuItem, 21);
    RR->setBrush(Qt::white);
    RR->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(RR);
    RR->setPos(1293.33, 1236);

    // Rio Grande do Sul
    EllipseItem *RS = new EllipseItem(ui->menuItem, 22);
    RS->setBrush(Qt::white);
    RS->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(RS);
    RS->setPos(1378.67, 1801.33);

    // Santa Catarina
    EllipseItem *SC = new EllipseItem(ui->menuItem, 23);
    SC->setBrush(Qt::white);
    SC->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(SC);
    SC->setPos(1462.67, 1773.33);

    // Sergipe
    EllipseItem *SE = new EllipseItem(ui->menuItem, 24);
    SE->setBrush(Qt::white);
    SE->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(SE);
    SE->setPos(1710.67, 1466.67);

    // São Paulo
    EllipseItem *SP = new EllipseItem(ui->menuItem, 25);
    SP->setBrush(Qt::white);
    SP->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(SP);
    SP->setPos(1517.33, 1709.33);

    // Tocantins
    EllipseItem *TO = new EllipseItem(ui->menuItem, 26);
    TO->setBrush(Qt::white);
    TO->setFlag(QGraphicsItem::ItemIsMovable, false);
    scene->addItem(TO);
    TO->setPos(1508, 1408);

    // Divisas dos estados

    // Aresta: AC - AM
    QGraphicsLineItem *line1 = new QGraphicsLineItem(QLineF(AC->x(), AC->y(), AM->x(), AM->y()));
    scene->addItem(line1);
    line1->setZValue(-1000.0);

    // Aresta: AC - RO
    QGraphicsLineItem *line2 = new QGraphicsLineItem(QLineF(AC->x(), AC->y(), RO->x(), RO->y()));
    scene->addItem(line2);
    line2->setZValue(-1000.0);

    // Aresta: AL - PE
    QGraphicsLineItem *line3 = new QGraphicsLineItem(QLineF(AL->x(), AL->y(), PE->x(), PE->y()));
    scene->addItem(line3);
    line3->setZValue(-1000.0);

    // Aresta: AL - BA
    QGraphicsLineItem *line4 = new QGraphicsLineItem(QLineF(AL->x(), AL->y(), BA->x(), BA->y()));
    scene->addItem(line4);
    line4->setZValue(-1000.0);

    // Aresta: AL - SE
    QGraphicsLineItem *line5 = new QGraphicsLineItem(QLineF(AL->x(), AL->y(), SE->x(), SE->y()));
    scene->addItem(line5);
    line5->setZValue(-1000.0);

    // Aresta: AM - RR
    QGraphicsLineItem *line6 = new QGraphicsLineItem(QLineF(AM->x(), AM->y(), RR->x(), RR->y()));
    scene->addItem(line6);
    line6->setZValue(-1000.0);

    // Aresta: AM - RO
    QGraphicsLineItem *line7 = new QGraphicsLineItem(QLineF(AM->x(), AM->y(), RR->x(), RR->y()));
    scene->addItem(line7);
    line7->setZValue(-1000.0);

    // Aresta: AM - MT
    QGraphicsLineItem *line8 = new QGraphicsLineItem(QLineF(AM->x(), AM->y(), MT->x(), MT->y()));
    scene->addItem(line8);
    line8->setZValue(-1000.0);

    // Aresta: AM - PA
    QGraphicsLineItem *line9 = new QGraphicsLineItem(QLineF(AM->x(), AM->y(), PA->x(), PA->y()));
    scene->addItem(line9);
    line9->setZValue(-1000.0);

    // Aresta: AP - PA
    QGraphicsLineItem *line10 = new QGraphicsLineItem(QLineF(AP->x(), AP->y(), PA->x(), PA->y()));
    scene->addItem(line10);
    line10->setZValue(-1000.0);

    // Aresta: BA - ES
    QGraphicsLineItem *line11 = new QGraphicsLineItem(QLineF(BA->x(), BA->y(), ES->x(), ES->y()));
    scene->addItem(line11);
    line11->setZValue(-1000.0);

    // Aresta: BA - MG
    QGraphicsLineItem *line12 = new QGraphicsLineItem(QLineF(BA->x(), BA->y(), MG->x(), MG->y()));
    scene->addItem(line12);
    line12->setZValue(-1000.0);

    // Aresta: BA - GO
    QGraphicsLineItem *line13 = new QGraphicsLineItem(QLineF(BA->x(), BA->y(), GO->x(), GO->y()));
    scene->addItem(line13);
    line13->setZValue(-1000.0);

    // Aresta: BA - TO
    QGraphicsLineItem *line14 = new QGraphicsLineItem(QLineF(BA->x(), BA->y(), TO->x(), TO->y()));
    scene->addItem(line14);
    line14->setZValue(-1000.0);

    // Aresta: BA - PI
    QGraphicsLineItem *line15 = new QGraphicsLineItem(QLineF(BA->x(), BA->y(), PI->x(), PI->y()));
    scene->addItem(line15);
    line15->setZValue(-1000.0);

    // Aresta: BA - PE
    QGraphicsLineItem *line16 = new QGraphicsLineItem(QLineF(BA->x(), BA->y(), PE->x(), PE->y()));
    scene->addItem(line16);
    line16->setZValue(-1000.0);

    // Aresta: BA - SE
    QGraphicsLineItem *line17 = new QGraphicsLineItem(QLineF(BA->x(), BA->y(), SE->x(), SE->y()));
    scene->addItem(line17);
    line17->setZValue(-1000.0);

    // Aresta: RS - SC
    QGraphicsLineItem *line18 = new QGraphicsLineItem(QLineF(RS->x(), RS->y(), SC->x(), SC->y()));
    scene->addItem(line18);
    line18->setZValue(-1000.0);

    // Aresta: SC - PR
    QGraphicsLineItem *line19 = new QGraphicsLineItem(QLineF(SC->x(), SC->y(), PR->x(), PR->y()));
    scene->addItem(line19);
    line19->setZValue(-1000.0);

    // Aresta: PR - SP
    QGraphicsLineItem *line20 = new QGraphicsLineItem(QLineF(PR->x(), PR->y(), SP->x(), SP->y()));
    scene->addItem(line20);
    line20->setZValue(-1000.0);

    // Aresta: PR - MS
    QGraphicsLineItem *line21 = new QGraphicsLineItem(QLineF(PR->x(), PR->y(), MS->x(), MS->y()));
    scene->addItem(line21);
    line21->setZValue(-1000.0);

    // Aresta: SP - RJ
    QGraphicsLineItem *line22 = new QGraphicsLineItem(QLineF(SP->x(), SP->y(), RJ->x(), RJ->y()));
    scene->addItem(line22);
    line22->setZValue(-1000.0);

    // Aresta: SP - MG
    QGraphicsLineItem *line23 = new QGraphicsLineItem(QLineF(SP->x(), SP->y(), MG->x(), MG->y()));
    scene->addItem(line23);
    line23->setZValue(-1000.0);

    // Aresta: SP - MS
    QGraphicsLineItem *line24 = new QGraphicsLineItem(QLineF(SP->x(), SP->y(), MS->x(), MS->y()));
    scene->addItem(line24);
    line24->setZValue(-1000.0);

    // Aresta: MS - GO
    QGraphicsLineItem *line25 = new QGraphicsLineItem(QLineF(MS->x(), MS->y(), GO->x(), GO->y()));
    scene->addItem(line25);
    line25->setZValue(-1000.0);

    // Aresta: MS - MG
    QGraphicsLineItem *line26 = new QGraphicsLineItem(QLineF(MS->x(), MS->y(), MG->x(), MG->y()));
    scene->addItem(line26);
    line26->setZValue(-1000.0);

    // Aresta: MS - MT
    QGraphicsLineItem *line27 = new QGraphicsLineItem(QLineF(MS->x(), MS->y(), MT->x(), MT->y()));
    scene->addItem(line27);
    line27->setZValue(-1000.0);

    // Aresta: DF - GO
    QGraphicsLineItem *line28 = new QGraphicsLineItem(QLineF(DF->x(), DF->y(), GO->x(), GO->y()));
    scene->addItem(line28);
    line28->setZValue(-1000.0);

    // Aresta: DF - MG
    QGraphicsLineItem *line29 = new QGraphicsLineItem(QLineF(DF->x(), DF->y(), MG->x(), MG->y()));
    scene->addItem(line29);
    line29->setZValue(-1000.0);

    // Aresta: RJ - ES
    QGraphicsLineItem *line30 = new QGraphicsLineItem(QLineF(RJ->x(), RJ->y(), ES->x(), ES->y()));
    scene->addItem(line30);
    line30->setZValue(-1000.0);

    // Aresta: RJ - MG
    QGraphicsLineItem *line31 = new QGraphicsLineItem(QLineF(RJ->x(), RJ->y(), MG->x(), MG->y()));
    scene->addItem(line31);
    line31->setZValue(-1000.0);

    // Aresta: ES - MG
    QGraphicsLineItem *line32 = new QGraphicsLineItem(QLineF(ES->x(), ES->y(), MG->x(), MG->y()));
    scene->addItem(line32);
    line32->setZValue(-1000.0);

    // Aresta: GO - MG
    QGraphicsLineItem *line33 = new QGraphicsLineItem(QLineF(GO->x(), GO->y(), MG->x(), MG->y()));
    scene->addItem(line33);
    line33->setZValue(-1000.0);

    // Aresta: GO - MT
    QGraphicsLineItem *line34 = new QGraphicsLineItem(QLineF(GO->x(), GO->y(), MT->x(), MT->y()));
    scene->addItem(line34);
    line34->setZValue(-1000.0);

    // Aresta: MT - RO
    QGraphicsLineItem *line35 = new QGraphicsLineItem(QLineF(MT->x(), MT->y(), RO->x(), RO->y()));
    scene->addItem(line35);
    line35->setZValue(-1000.0);

    // Aresta: MT - PA
    QGraphicsLineItem *line36 = new QGraphicsLineItem(QLineF(MT->x(), MT->y(), PA->x(), PA->y()));
    scene->addItem(line36);
    line36->setZValue(-1000.0);

    // Aresta: MT - TO
    QGraphicsLineItem *line37 = new QGraphicsLineItem(QLineF(MT->x(), MT->y(), TO->x(), TO->y()));
    scene->addItem(line37);
    line37->setZValue(-1000.0);

    // Aresta: TO - PA
    QGraphicsLineItem *line38 = new QGraphicsLineItem(QLineF(TO->x(), TO->y(), PA->x(), PA->y()));
    scene->addItem(line38);
    line38->setZValue(-1000.0);

    // Aresta: TO - GO
    QGraphicsLineItem *line39 = new QGraphicsLineItem(QLineF(TO->x(), TO->y(), GO->x(), GO->y()));
    scene->addItem(line39);
    line39->setZValue(-1000.0);

    // Aresta: TO - MA
    QGraphicsLineItem *line40 = new QGraphicsLineItem(QLineF(TO->x(), TO->y(), MA->x(), MA->y()));
    scene->addItem(line40);
    line40->setZValue(-1000.0);

    // Aresta: TO - PI
    QGraphicsLineItem *line41 = new QGraphicsLineItem(QLineF(TO->x(), TO->y(), PI->x(), PI->y()));
    scene->addItem(line41);
    line41->setZValue(-1000.0);

    // Aresta: CE - PI
    QGraphicsLineItem *line42 = new QGraphicsLineItem(QLineF(CE->x(), CE->y(), PI->x(), PI->y()));
    scene->addItem(line42);
    line42->setZValue(-1000.0);

    // Aresta: CE - RN
    QGraphicsLineItem *line43 = new QGraphicsLineItem(QLineF(CE->x(), CE->y(), RN->x(), RN->y()));
    scene->addItem(line43);
    line43->setZValue(-1000.0);

    // Aresta: CE - PB
    QGraphicsLineItem *line44 = new QGraphicsLineItem(QLineF(CE->x(), CE->y(), PB->x(), PB->y()));
    scene->addItem(line44);
    line44->setZValue(-1000.0);

    // Aresta: CE - PE
    QGraphicsLineItem *line45 = new QGraphicsLineItem(QLineF(CE->x(), CE->y(), PE->x(), PE->y()));
    scene->addItem(line45);
    line45->setZValue(-1000.0);

    // Aresta: PE - PB
    QGraphicsLineItem *line46 = new QGraphicsLineItem(QLineF(PE->x(), PE->y(), PB->x(), PB->y()));
    scene->addItem(line46);
    line46->setZValue(-1000.0);

    // Aresta: PE - PI
    QGraphicsLineItem *line47 = new QGraphicsLineItem(QLineF(PE->x(), PE->y(), PI->x(), PI->y()));
    scene->addItem(line47);
    line47->setZValue(-1000.0);

    // Aresta: MA - PA
    QGraphicsLineItem *line48 = new QGraphicsLineItem(QLineF(MA->x(), MA->y(), PA->x(), PA->y()));
    scene->addItem(line48);
    line48->setZValue(-1000.0);

    // Aresta: MA - PI
    QGraphicsLineItem *line49 = new QGraphicsLineItem(QLineF(MA->x(), MA->y(), PI->x(), PI->y()));
    scene->addItem(line49);
    line49->setZValue(-1000.0);

    // Aresta: RR - PA
    QGraphicsLineItem *line50 = new QGraphicsLineItem(QLineF(RR->x(), RR->y(), PA->x(), PA->y()));
    scene->addItem(line50);
    line50->setZValue(-1000.0);

    // Aresta: AM - RO
    QGraphicsLineItem *line51 = new QGraphicsLineItem(QLineF(AM->x(), AM->y(), RO->x(), RO->y()));
    scene->addItem(line51);
    line51->setZValue(-1000.0);
}

