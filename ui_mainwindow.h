/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QAction *actionTrazer_para_frente;
    QAction *actionLevar_para_tr_s;
    QAction *actionMatriz_de_adjac_ncia;
    QAction *actionMapaBrasil;
    QAction *actionCromossomo_final;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonItem;
    QRadioButton *radioButtonEdge;
    QRadioButton *radioButtonPointer;
    QComboBox *zoomComboBox;
    QPushButton *buttonClearScene;
    QPushButton *buttonDelete;
    QPushButton *buttonSendFront;
    QPushButton *buttonSendBack;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *cbRed;
    QCheckBox *cbCyan;
    QCheckBox *cbBlue;
    QCheckBox *cbGray;
    QCheckBox *cbYellow;
    QCheckBox *cbDarkYellow;
    QCheckBox *cbGreen;
    QCheckBox *cbDarkRed;
    QCheckBox *cbMagenta;
    QCheckBox *cbBlack;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditInitPop;
    QLineEdit *lineEditCrossings;
    QLineEdit *lineEditMutations;
    QLineEdit *lineEditGenerations;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buttonSolution;
    QPushButton *buttonClearAll;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *lbVertices;
    QLabel *lbEdges;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *lbFinalFit;
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1099, 609);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/winicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        actionSobre->setShortcutContext(Qt::WindowShortcut);
        actionDeletar = new QAction(MainWindow);
        actionDeletar->setObjectName(QStringLiteral("actionDeletar"));
        actionTrazer_para_frente = new QAction(MainWindow);
        actionTrazer_para_frente->setObjectName(QStringLiteral("actionTrazer_para_frente"));
        actionLevar_para_tr_s = new QAction(MainWindow);
        actionLevar_para_tr_s->setObjectName(QStringLiteral("actionLevar_para_tr_s"));
        actionMatriz_de_adjac_ncia = new QAction(MainWindow);
        actionMatriz_de_adjac_ncia->setObjectName(QStringLiteral("actionMatriz_de_adjac_ncia"));
        actionMapaBrasil = new QAction(MainWindow);
        actionMapaBrasil->setObjectName(QStringLiteral("actionMapaBrasil"));
        actionCromossomo_final = new QAction(MainWindow);
        actionCromossomo_final->setObjectName(QStringLiteral("actionCromossomo_final"));
        actionCromossomo_final->setEnabled(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 0, 914, 551));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButtonItem = new QRadioButton(layoutWidget);
        radioButtonItem->setObjectName(QStringLiteral("radioButtonItem"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonItem->setIcon(icon1);

        horizontalLayout_2->addWidget(radioButtonItem);

        radioButtonEdge = new QRadioButton(layoutWidget);
        radioButtonEdge->setObjectName(QStringLiteral("radioButtonEdge"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("images/linepointer.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonEdge->setIcon(icon2);

        horizontalLayout_2->addWidget(radioButtonEdge);

        radioButtonPointer = new QRadioButton(layoutWidget);
        radioButtonPointer->setObjectName(QStringLiteral("radioButtonPointer"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("images/pointer.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonPointer->setIcon(icon3);

        horizontalLayout_2->addWidget(radioButtonPointer);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        zoomComboBox = new QComboBox(layoutWidget);
        zoomComboBox->setObjectName(QStringLiteral("zoomComboBox"));

        horizontalLayout_5->addWidget(zoomComboBox);

        buttonClearScene = new QPushButton(layoutWidget);
        buttonClearScene->setObjectName(QStringLiteral("buttonClearScene"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("images/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonClearScene->setIcon(icon4);

        horizontalLayout_5->addWidget(buttonClearScene);

        buttonDelete = new QPushButton(layoutWidget);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonDelete->setIcon(icon5);

        horizontalLayout_5->addWidget(buttonDelete);

        buttonSendFront = new QPushButton(layoutWidget);
        buttonSendFront->setObjectName(QStringLiteral("buttonSendFront"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("images/bringtofront.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonSendFront->setIcon(icon6);

        horizontalLayout_5->addWidget(buttonSendFront);

        buttonSendBack = new QPushButton(layoutWidget);
        buttonSendBack->setObjectName(QStringLiteral("buttonSendBack"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("images/sendtoback.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonSendBack->setIcon(icon7);

        horizontalLayout_5->addWidget(buttonSendBack);


        verticalLayout->addLayout(horizontalLayout_5);

        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 180, 220, 170));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(218, 218, 218);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cbRed = new QCheckBox(groupBox);
        cbRed->setObjectName(QStringLiteral("cbRed"));
        cbRed->setFont(font);
        cbRed->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(cbRed, 0, 0, 1, 1);

        cbCyan = new QCheckBox(groupBox);
        cbCyan->setObjectName(QStringLiteral("cbCyan"));
        cbCyan->setFont(font);
        cbCyan->setStyleSheet(QLatin1String("color: rgb(0, 255, 255);\n"
""));

        gridLayout->addWidget(cbCyan, 0, 1, 1, 1);

        cbBlue = new QCheckBox(groupBox);
        cbBlue->setObjectName(QStringLiteral("cbBlue"));
        cbBlue->setFont(font);
        cbBlue->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        gridLayout->addWidget(cbBlue, 1, 0, 1, 1);

        cbGray = new QCheckBox(groupBox);
        cbGray->setObjectName(QStringLiteral("cbGray"));
        cbGray->setFont(font);
        cbGray->setStyleSheet(QStringLiteral("color: rgb(127, 127, 127);"));

        gridLayout->addWidget(cbGray, 1, 1, 1, 1);

        cbYellow = new QCheckBox(groupBox);
        cbYellow->setObjectName(QStringLiteral("cbYellow"));
        cbYellow->setFont(font);
        cbYellow->setStyleSheet(QLatin1String("color: rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);"));

        gridLayout->addWidget(cbYellow, 2, 0, 1, 1);

        cbDarkYellow = new QCheckBox(groupBox);
        cbDarkYellow->setObjectName(QStringLiteral("cbDarkYellow"));
        cbDarkYellow->setFont(font);
        cbDarkYellow->setStyleSheet(QStringLiteral("color: rgb(128, 128, 0);"));

        gridLayout->addWidget(cbDarkYellow, 2, 1, 1, 1);

        cbGreen = new QCheckBox(groupBox);
        cbGreen->setObjectName(QStringLiteral("cbGreen"));
        cbGreen->setFont(font);
        cbGreen->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));

        gridLayout->addWidget(cbGreen, 3, 0, 1, 1);

        cbDarkRed = new QCheckBox(groupBox);
        cbDarkRed->setObjectName(QStringLiteral("cbDarkRed"));
        cbDarkRed->setFont(font);
        cbDarkRed->setStyleSheet(QStringLiteral("color: rgb(128, 0, 0);"));

        gridLayout->addWidget(cbDarkRed, 3, 1, 1, 1);

        cbMagenta = new QCheckBox(groupBox);
        cbMagenta->setObjectName(QStringLiteral("cbMagenta"));
        cbMagenta->setFont(font);
        cbMagenta->setStyleSheet(QStringLiteral("color: rgb(255, 0, 255);"));

        gridLayout->addWidget(cbMagenta, 4, 0, 1, 1);

        cbBlack = new QCheckBox(groupBox);
        cbBlack->setObjectName(QStringLiteral("cbBlack"));
        cbBlack->setFont(font);
        cbBlack->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(cbBlack, 4, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 214, 139));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_6);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEditInitPop = new QLineEdit(layoutWidget1);
        lineEditInitPop->setObjectName(QStringLiteral("lineEditInitPop"));

        verticalLayout_3->addWidget(lineEditInitPop);

        lineEditCrossings = new QLineEdit(layoutWidget1);
        lineEditCrossings->setObjectName(QStringLiteral("lineEditCrossings"));

        verticalLayout_3->addWidget(lineEditCrossings);

        lineEditMutations = new QLineEdit(layoutWidget1);
        lineEditMutations->setObjectName(QStringLiteral("lineEditMutations"));

        verticalLayout_3->addWidget(lineEditMutations);

        lineEditGenerations = new QLineEdit(layoutWidget1);
        lineEditGenerations->setObjectName(QStringLiteral("lineEditGenerations"));

        verticalLayout_3->addWidget(lineEditGenerations);


        horizontalLayout_3->addLayout(verticalLayout_3);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 360, 216, 33));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        buttonSolution = new QPushButton(layoutWidget2);
        buttonSolution->setObjectName(QStringLiteral("buttonSolution"));

        horizontalLayout_4->addWidget(buttonSolution);

        buttonClearAll = new QPushButton(layoutWidget2);
        buttonClearAll->setObjectName(QStringLiteral("buttonClearAll"));

        horizontalLayout_4->addWidget(buttonClearAll);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 410, 211, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_4->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lbVertices = new QLabel(layoutWidget3);
        lbVertices->setObjectName(QStringLiteral("lbVertices"));
        lbVertices->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(lbVertices);

        lbEdges = new QLabel(layoutWidget3);
        lbEdges->setObjectName(QStringLiteral("lbEdges"));
        lbEdges->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_5->addWidget(lbEdges);


        horizontalLayout->addLayout(verticalLayout_5);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 490, 211, 43));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setItalic(true);
        label_7->setFont(font1);

        horizontalLayout_6->addWidget(label_7);

        lbFinalFit = new QLabel(layoutWidget4);
        lbFinalFit->setObjectName(QStringLiteral("lbFinalFit"));
        lbFinalFit->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout_6->addWidget(lbFinalFit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1099, 27));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuItem = new QMenu(menuBar);
        menuItem->setObjectName(QStringLiteral("menuItem"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        menuExemplos = new QMenu(menuBar);
        menuExemplos->setObjectName(QStringLiteral("menuExemplos"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuExemplos->menuAction());
        menuBar->addAction(menuItem->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionSair);
        menuItem->addAction(actionDeletar);
        menuItem->addAction(actionTrazer_para_frente);
        menuItem->addAction(actionLevar_para_tr_s);
        menuAjuda->addAction(actionSobre);
        menuExemplos->addAction(actionMapaBrasil);

        retranslateUi(MainWindow);
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Algoritmo Gen\303\251tico para colora\303\247\303\243o de grafos", 0));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", 0));
        actionSair->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionSobre->setText(QApplication::translate("MainWindow", "&Sobre", 0));
        actionDeletar->setText(QApplication::translate("MainWindow", "Deletar", 0));
        actionTrazer_para_frente->setText(QApplication::translate("MainWindow", "Trazer para frente", 0));
        actionLevar_para_tr_s->setText(QApplication::translate("MainWindow", "Levar para tr\303\241s", 0));
        actionMatriz_de_adjac_ncia->setText(QApplication::translate("MainWindow", "Matriz de adjac\303\252ncia", 0));
        actionMapaBrasil->setText(QApplication::translate("MainWindow", "Mapa do Brasil", 0));
        actionCromossomo_final->setText(QApplication::translate("MainWindow", "Cromossomo final", 0));
        radioButtonItem->setText(QApplication::translate("MainWindow", "V\303\251rtice", 0));
        radioButtonEdge->setText(QApplication::translate("MainWindow", "Aresta", 0));
        radioButtonPointer->setText(QApplication::translate("MainWindow", "Selecionar", 0));
        buttonClearScene->setText(QApplication::translate("MainWindow", "Limpar tudo", 0));
        buttonDelete->setText(QApplication::translate("MainWindow", "Deletar", 0));
        buttonSendFront->setText(QApplication::translate("MainWindow", "Para frente", 0));
        buttonSendBack->setText(QApplication::translate("MainWindow", "Para tr\303\241s", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Selecionar Cores", 0));
        cbRed->setText(QApplication::translate("MainWindow", "Vermelho", 0));
        cbCyan->setText(QApplication::translate("MainWindow", "Aqua", 0));
        cbBlue->setText(QApplication::translate("MainWindow", "Azul", 0));
        cbGray->setText(QApplication::translate("MainWindow", "Cinza", 0));
        cbYellow->setText(QApplication::translate("MainWindow", "Amarelo", 0));
        cbDarkYellow->setText(QApplication::translate("MainWindow", "Oliva", 0));
        cbGreen->setText(QApplication::translate("MainWindow", "Verde", 0));
        cbDarkRed->setText(QApplication::translate("MainWindow", "Bord\303\264", 0));
        cbMagenta->setText(QApplication::translate("MainWindow", "Magenta", 0));
        cbBlack->setText(QApplication::translate("MainWindow", "Preto", 0));
        label_6->setText(QApplication::translate("MainWindow", "Popula\303\247\303\243o inicial", 0));
        label_2->setText(QApplication::translate("MainWindow", "Cruzamentos", 0));
        label_3->setText(QApplication::translate("MainWindow", "Muta\303\247\303\265es", 0));
        label_4->setText(QApplication::translate("MainWindow", "Gera\303\247\303\265es", 0));
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
        buttonSolution->setText(QApplication::translate("MainWindow", "Gerar solu\303\247\303\243o", 0));
        buttonClearAll->setText(QApplication::translate("MainWindow", "Limpar tudo", 0));
        label->setText(QApplication::translate("MainWindow", "Total de v\303\251rtices", 0));
        label_5->setText(QApplication::translate("MainWindow", "Total de arestas", 0));
        lbVertices->setText(QApplication::translate("MainWindow", "----", 0));
        lbEdges->setText(QApplication::translate("MainWindow", "----", 0));
        label_7->setText(QApplication::translate("MainWindow", "Fitness m\303\241ximo do\n"
"cromossomo final:", 0));
        lbFinalFit->setText(QApplication::translate("MainWindow", "----", 0));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", 0));
        menuItem->setTitle(QApplication::translate("MainWindow", "Item", 0));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", 0));
        menuExemplos->setTitle(QApplication::translate("MainWindow", "Exemplos", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
