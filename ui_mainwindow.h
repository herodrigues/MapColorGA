/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSair;
    QAction *actionSobre;
    QAction *actionDeletar;
    QAction *actionBringToFront;
    QAction *actionSendToBack;
    QAction *actionMatriz_de_adjac_ncia;
    QAction *actionMapaBrasil;
    QAction *actionCromossomo_final;
    QAction *actionVertex;
    QAction *actionEdge;
    QAction *actionSelect;
    QAction *actionDelete;
    QAction *actionClearScene;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditInitPop;
    QLineEdit *lineEditCrossings;
    QLineEdit *lineEditMutations;
    QLineEdit *lineEditGenerations;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *cbRed;
    QCheckBox *cbCyan;
    QCheckBox *cbYellow;
    QCheckBox *cbMagenta;
    QCheckBox *cbBlue;
    QCheckBox *cbGray;
    QCheckBox *cbBlack;
    QCheckBox *cbDarkRed;
    QCheckBox *cbDarkYellow;
    QCheckBox *cbGreen;
    QGridLayout *gridLayout_3;
    QLabel *lbFinalFit;
    QLabel *label_7;
    QPushButton *buttonClearAll;
    QLabel *lbVertices;
    QLabel *label_5;
    QLabel *lbEdges;
    QPushButton *buttonSolution;
    QLabel *label;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuItem;
    QMenu *menuAjuda;
    QMenu *menuExemplos;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1099, 540);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/winicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        actionSobre->setShortcutContext(Qt::WindowShortcut);
        actionDeletar = new QAction(MainWindow);
        actionDeletar->setObjectName(QString::fromUtf8("actionDeletar"));
        actionBringToFront = new QAction(MainWindow);
        actionBringToFront->setObjectName(QString::fromUtf8("actionBringToFront"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("bottom");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("images/bringtofront.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionBringToFront->setIcon(icon1);
        actionSendToBack = new QAction(MainWindow);
        actionSendToBack->setObjectName(QString::fromUtf8("actionSendToBack"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("top");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("images/sendtoback.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSendToBack->setIcon(icon2);
        actionMatriz_de_adjac_ncia = new QAction(MainWindow);
        actionMatriz_de_adjac_ncia->setObjectName(QString::fromUtf8("actionMatriz_de_adjac_ncia"));
        actionMapaBrasil = new QAction(MainWindow);
        actionMapaBrasil->setObjectName(QString::fromUtf8("actionMapaBrasil"));
        actionCromossomo_final = new QAction(MainWindow);
        actionCromossomo_final->setObjectName(QString::fromUtf8("actionCromossomo_final"));
        actionCromossomo_final->setEnabled(false);
        actionVertex = new QAction(MainWindow);
        actionVertex->setObjectName(QString::fromUtf8("actionVertex"));
        actionVertex->setCheckable(true);
        QIcon icon3;
        iconThemeName = QString::fromUtf8("media-record");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionVertex->setIcon(icon3);
        actionEdge = new QAction(MainWindow);
        actionEdge->setObjectName(QString::fromUtf8("actionEdge"));
        actionEdge->setCheckable(true);
        QIcon icon4;
        iconThemeName = QString::fromUtf8("object-flip-horizontal");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8(":/images/linepointer.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionEdge->setIcon(icon4);
        actionSelect = new QAction(MainWindow);
        actionSelect->setObjectName(QString::fromUtf8("actionSelect"));
        actionSelect->setCheckable(true);
        QIcon icon5;
        iconThemeName = QString::fromUtf8("object-select");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("images/pointer.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionSelect->setIcon(icon5);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("edit-delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDelete->setIcon(icon6);
        actionClearScene = new QAction(MainWindow);
        actionClearScene->setObjectName(QString::fromUtf8("actionClearScene"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("edit-clear-all");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("images/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionClearScene->setIcon(icon7);
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("zoom-in");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("images/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionZoom_In->setIcon(icon8);
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8("zoom-out");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("images/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionZoom_Out->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_6);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditInitPop = new QLineEdit(centralWidget);
        lineEditInitPop->setObjectName(QString::fromUtf8("lineEditInitPop"));

        verticalLayout_2->addWidget(lineEditInitPop);

        lineEditCrossings = new QLineEdit(centralWidget);
        lineEditCrossings->setObjectName(QString::fromUtf8("lineEditCrossings"));

        verticalLayout_2->addWidget(lineEditCrossings);

        lineEditMutations = new QLineEdit(centralWidget);
        lineEditMutations->setObjectName(QString::fromUtf8("lineEditMutations"));

        verticalLayout_2->addWidget(lineEditMutations);

        lineEditGenerations = new QLineEdit(centralWidget);
        lineEditGenerations->setObjectName(QString::fromUtf8("lineEditGenerations"));

        verticalLayout_2->addWidget(lineEditGenerations);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbRed = new QCheckBox(groupBox);
        cbRed->setObjectName(QString::fromUtf8("cbRed"));
        cbRed->setFont(font);
        cbRed->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(cbRed, 0, 0, 1, 1);

        cbCyan = new QCheckBox(groupBox);
        cbCyan->setObjectName(QString::fromUtf8("cbCyan"));
        cbCyan->setFont(font);
        cbCyan->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
""));

        gridLayout->addWidget(cbCyan, 0, 1, 1, 1);

        cbYellow = new QCheckBox(groupBox);
        cbYellow->setObjectName(QString::fromUtf8("cbYellow"));
        cbYellow->setFont(font);
        cbYellow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);"));

        gridLayout->addWidget(cbYellow, 2, 0, 1, 1);

        cbMagenta = new QCheckBox(groupBox);
        cbMagenta->setObjectName(QString::fromUtf8("cbMagenta"));
        cbMagenta->setFont(font);
        cbMagenta->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 255);"));

        gridLayout->addWidget(cbMagenta, 4, 0, 1, 1);

        cbBlue = new QCheckBox(groupBox);
        cbBlue->setObjectName(QString::fromUtf8("cbBlue"));
        cbBlue->setFont(font);
        cbBlue->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        gridLayout->addWidget(cbBlue, 1, 0, 1, 1);

        cbGray = new QCheckBox(groupBox);
        cbGray->setObjectName(QString::fromUtf8("cbGray"));
        cbGray->setFont(font);
        cbGray->setStyleSheet(QString::fromUtf8("color: rgb(127, 127, 127);"));

        gridLayout->addWidget(cbGray, 1, 1, 1, 1);

        cbBlack = new QCheckBox(groupBox);
        cbBlack->setObjectName(QString::fromUtf8("cbBlack"));
        cbBlack->setFont(font);
        cbBlack->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(cbBlack, 4, 1, 1, 1);

        cbDarkRed = new QCheckBox(groupBox);
        cbDarkRed->setObjectName(QString::fromUtf8("cbDarkRed"));
        cbDarkRed->setFont(font);
        cbDarkRed->setStyleSheet(QString::fromUtf8("color: rgb(128, 0, 0);"));

        gridLayout->addWidget(cbDarkRed, 3, 1, 1, 1);

        cbDarkYellow = new QCheckBox(groupBox);
        cbDarkYellow->setObjectName(QString::fromUtf8("cbDarkYellow"));
        cbDarkYellow->setFont(font);
        cbDarkYellow->setStyleSheet(QString::fromUtf8("color: rgb(128, 128, 0);"));

        gridLayout->addWidget(cbDarkYellow, 2, 1, 1, 1);

        cbGreen = new QCheckBox(groupBox);
        cbGreen->setObjectName(QString::fromUtf8("cbGreen"));
        cbGreen->setFont(font);
        cbGreen->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));

        gridLayout->addWidget(cbGreen, 3, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lbFinalFit = new QLabel(centralWidget);
        lbFinalFit->setObjectName(QString::fromUtf8("lbFinalFit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbFinalFit->sizePolicy().hasHeightForWidth());
        lbFinalFit->setSizePolicy(sizePolicy1);
        lbFinalFit->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout_3->addWidget(lbFinalFit, 3, 1, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setItalic(true);
        label_7->setFont(font1);

        gridLayout_3->addWidget(label_7, 3, 0, 1, 1);

        buttonClearAll = new QPushButton(centralWidget);
        buttonClearAll->setObjectName(QString::fromUtf8("buttonClearAll"));

        gridLayout_3->addWidget(buttonClearAll, 0, 1, 1, 1);

        lbVertices = new QLabel(centralWidget);
        lbVertices->setObjectName(QString::fromUtf8("lbVertices"));
        lbVertices->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(lbVertices, 1, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 2, 0, 1, 1);

        lbEdges = new QLabel(centralWidget);
        lbEdges->setObjectName(QString::fromUtf8("lbEdges"));
        lbEdges->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(lbEdges, 2, 1, 1, 1);

        buttonSolution = new QPushButton(centralWidget);
        buttonSolution->setObjectName(QString::fromUtf8("buttonSolution"));

        gridLayout_3->addWidget(buttonSolution, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        horizontalLayout_2->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1099, 22));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuItem = new QMenu(menuBar);
        menuItem->setObjectName(QString::fromUtf8("menuItem"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
        menuExemplos = new QMenu(menuBar);
        menuExemplos->setObjectName(QString::fromUtf8("menuExemplos"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuExemplos->menuAction());
        menuBar->addAction(menuItem->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionSair);
        menuItem->addAction(actionDeletar);
        menuItem->addAction(actionBringToFront);
        menuItem->addAction(actionSendToBack);
        menuAjuda->addAction(actionSobre);
        menuExemplos->addAction(actionMapaBrasil);
        mainToolBar->addAction(actionVertex);
        mainToolBar->addAction(actionEdge);
        mainToolBar->addAction(actionSelect);
        mainToolBar->addAction(actionZoom_Out);
        mainToolBar->addAction(actionZoom_In);
        mainToolBar->addAction(actionDelete);
        mainToolBar->addAction(actionBringToFront);
        mainToolBar->addAction(actionSendToBack);
        mainToolBar->addAction(actionClearScene);

        retranslateUi(MainWindow);
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Algoritmo Gen\303\251tico para colora\303\247\303\243o de grafos", nullptr));
        actionSair->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSair->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionSobre->setText(QApplication::translate("MainWindow", "&About", nullptr));
        actionDeletar->setText(QApplication::translate("MainWindow", "Deletar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDeletar->setToolTip(QApplication::translate("MainWindow", "Delete", nullptr));
#endif // QT_NO_TOOLTIP
        actionBringToFront->setText(QApplication::translate("MainWindow", "Bring to Front", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBringToFront->setToolTip(QApplication::translate("MainWindow", "Bring to Front", nullptr));
#endif // QT_NO_TOOLTIP
        actionSendToBack->setText(QApplication::translate("MainWindow", "Send to Back", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSendToBack->setToolTip(QApplication::translate("MainWindow", "Send to Back", nullptr));
#endif // QT_NO_TOOLTIP
        actionMatriz_de_adjac_ncia->setText(QApplication::translate("MainWindow", "Adjacency Matrix", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMatriz_de_adjac_ncia->setToolTip(QApplication::translate("MainWindow", "Adjacency Matrix", nullptr));
#endif // QT_NO_TOOLTIP
        actionMapaBrasil->setText(QApplication::translate("MainWindow", "Brazil's Map", nullptr));
        actionCromossomo_final->setText(QApplication::translate("MainWindow", "Final Chromosome", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCromossomo_final->setToolTip(QApplication::translate("MainWindow", "Final Chromosome", nullptr));
#endif // QT_NO_TOOLTIP
        actionVertex->setText(QApplication::translate("MainWindow", "Vertex", nullptr));
#ifndef QT_NO_TOOLTIP
        actionVertex->setToolTip(QApplication::translate("MainWindow", "Draw vertex", nullptr));
#endif // QT_NO_TOOLTIP
        actionEdge->setText(QApplication::translate("MainWindow", "Edge", nullptr));
#ifndef QT_NO_TOOLTIP
        actionEdge->setToolTip(QApplication::translate("MainWindow", "Draw edge", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelect->setText(QApplication::translate("MainWindow", "Select", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSelect->setToolTip(QApplication::translate("MainWindow", "Selection Tool", nullptr));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("MainWindow", "Delete Tool", nullptr));
#endif // QT_NO_TOOLTIP
        actionClearScene->setText(QApplication::translate("MainWindow", "Clear All", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClearScene->setToolTip(QApplication::translate("MainWindow", "Clear all Vertices and Edges", nullptr));
#endif // QT_NO_TOOLTIP
        actionZoom_In->setText(QApplication::translate("MainWindow", "Zoom In", nullptr));
#ifndef QT_NO_TOOLTIP
        actionZoom_In->setToolTip(QApplication::translate("MainWindow", "Zoom In", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionZoom_In->setShortcut(QApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoom_Out->setText(QApplication::translate("MainWindow", "Zoom Out", nullptr));
#ifndef QT_NO_TOOLTIP
        actionZoom_Out->setToolTip(QApplication::translate("MainWindow", "Zoom Out", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionZoom_Out->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        label_6->setText(QApplication::translate("MainWindow", "Initial population", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Crossover", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Mutation", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Generation", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEditInitPop->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEditInitPop->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        lineEditCrossings->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEditCrossings->setText(QString());
        lineEditMutations->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        lineEditGenerations->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEditGenerations->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Selecionar Cores", nullptr));
        cbRed->setText(QApplication::translate("MainWindow", "Red", nullptr));
        cbCyan->setText(QApplication::translate("MainWindow", "Aqua", nullptr));
        cbYellow->setText(QApplication::translate("MainWindow", "Yellow", nullptr));
        cbMagenta->setText(QApplication::translate("MainWindow", "Pink", nullptr));
        cbBlue->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        cbGray->setText(QApplication::translate("MainWindow", "Grey", nullptr));
        cbBlack->setText(QApplication::translate("MainWindow", "Black", nullptr));
        cbDarkRed->setText(QApplication::translate("MainWindow", "Wine", nullptr));
        cbDarkYellow->setText(QApplication::translate("MainWindow", "Olive", nullptr));
        cbGreen->setText(QApplication::translate("MainWindow", "Green", nullptr));
        lbFinalFit->setText(QApplication::translate("MainWindow", "----", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Maximum fitness\n"
"of the final chromosome", nullptr));
        buttonClearAll->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        lbVertices->setText(QApplication::translate("MainWindow", "----", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Total of edges", nullptr));
        lbEdges->setText(QApplication::translate("MainWindow", "----", nullptr));
        buttonSolution->setText(QApplication::translate("MainWindow", "Generate solution", nullptr));
        label->setText(QApplication::translate("MainWindow", "Total of vertices", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuItem->setTitle(QApplication::translate("MainWindow", "&Item", nullptr));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        menuExemplos->setTitle(QApplication::translate("MainWindow", "&Examples", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
