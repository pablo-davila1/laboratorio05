#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "cuerpo.h"
#include "wall.h"
#include "coin.h"
#include "score.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QList>
#include <QString>
#include <string>
#include <sstream>
#include <QMainWindow>
#include <QGraphicsRectItem>
#include <fstream>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
    cuerpo *pacman;

    wall *wall1;
    wall *wall1_1;
    wall *wall1_2;
    wall *wall1_3;

    wall *wall2;
    wall *wall2_1;
    wall *wall2_2;

    wall *wall3;
    wall *wall3_1;
    wall *wall3_2;

    wall *wall4;
    wall *wall4_1;
    wall *wall4_2;

    wall *wall5;
    wall *wall5_1;
    wall *wall5_2;

    wall *wall6;
    wall *wall6_1;
    wall *wall6_2;
    wall *wall6_3;

    wall *wall7;
    wall *wall7_1;
    wall *wall7_2;

    wall *wall8;
    wall *wall8_1;
    wall *wall8_2;

    wall *wall9;
    wall *wall9_1;
    wall *wall9_2;
    wall *wall9_3;

    wall *wall10;
    wall *wall10_1;

    wall *wall11;
    wall *wall11_1;
    wall *wall11_2;
    wall *wall11_3;

    wall *wall12;
    wall *wall12_1;
    wall *wall12_2;
    wall *wall12_3;

    wall *wall13;
    wall *wall13_1;
    wall *wall13_2;
    wall *wall13_3;

    wall *wall14;
    wall *wall14_1;
    wall *wall14_2;
    wall *wall14_3;

    wall *wall15;
    wall *wall15_1;
    wall *wall15_2;

    wall *wall16;
    wall *wall16_1;
    wall *wall16_2;

    wall *wall17;
    wall *wall17_1;
    wall *wall17_2;

    wall *wall18;
    wall *wall18_1;
    wall *wall18_2;

    coin *coin1;
    coin *coin2;
    coin *coin3;
    coin *coin4;
    coin *coin5;
    coin *coin6;
    coin *coin7;
    coin *coin8;
    coin *coin9;

    score * Score;

    QGraphicsScene * scene;
};
#endif // MAINWINDOW_H
