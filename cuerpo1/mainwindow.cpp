#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,420,420);
    personaje = new cuerpo(17,220,220);

    muro1_1 = new pared(10,200,0,-100);
    muro1_2 = new pared(10,200,10,-100);
    muro1_3 = new pared(20,0,10,-300);
    muro1_4 = new pared(20,0,10,-100);

    muro2 = new pared(10,420,163,0);// muro lateral derecho
    muro3 = new pared(750,10,160,0);// muro superio
    muro4 = new pared(10,420,-573,0);// muro lateral izquierdo
    muro5 = new pared (750,10,160,-410);// muro inferior

    muro2_1 = new pared(100,10,100,-100);
    muro2_2 = new pared(100,10,100,-110);
    muro2_3 = new pared(0,20,100,-100);

    muro3_1 = new pared(100,10,100,-280);
    muro3_2 = new pared(100,10,100,-290);
    muro3_3 = new pared(0,20,100,-280);

    muro4_1 = new pared(10,200,-410,-100);
    muro4_2 = new pared(10,200,-420,-100); //rigth
    muro4_3 = new pared(20,0,-410,-300); // up
    muro4_4 = new pared(20,0,-410,-100); //down

    muro5_1 = new pared(100,10,-410,-100);//down
    muro5_2 = new pared(100,10,-410,-110);//up
    muro5_3 = new pared(0,20,-510,-100);//left

    muro6_1 = new pared(100,10,-410,-280);//down
    muro6_2 = new pared(100,10,-410,-290);//up
    muro6_3 = new pared(0,20,-510,-280);//left

    muro7_1 = new pared(300,10,-60,-100);//down
    muro7_2 = new pared(300,10,-60,-110);//up
    muro7_3 = new pared(0,20,-60,-100);//right
    muro7_4 = new pared(0,20,-360,-100);//left

    muro8_1 = new pared(300,10,-60,-280);//down
    muro8_2 = new pared(300,10,-60,-290);//up
    muro8_3 = new pared(0,20,-60,-280);//right
    muro8_4 = new pared(0,20,-360,-280);//left






    scene->addItem(personaje);
    scene->addItem(muro1_1);
    scene->addItem(muro1_2);
    scene->addItem(muro1_3);
    scene->addItem(muro1_4);
    scene->addItem(muro2);
    scene->addItem(muro3);
    scene->addItem(muro4);
    scene->addItem(muro5);
    scene->addItem(muro2_1);
    scene->addItem(muro2_2);
    scene->addItem(muro2_3);
    scene->addItem(muro3_1);
    scene->addItem(muro3_2);
    scene->addItem(muro3_3);
    scene->addItem(muro4_1);
    scene->addItem(muro4_2);
    scene->addItem(muro4_3);
    scene->addItem(muro4_4);
    scene->addItem(muro5_1);
    scene->addItem(muro5_2);
    scene->addItem(muro5_3);
    scene->addItem(muro6_1);
    scene->addItem(muro6_2);
    scene->addItem(muro6_3);
    scene->addItem(muro7_1);
    scene->addItem(muro7_2);
    scene->addItem(muro7_3);
    scene->addItem(muro7_4);
    scene->addItem(muro8_1);
    scene->addItem(muro8_2);
    scene->addItem(muro8_3);
    scene->addItem(muro8_4);

}

void MainWindow::keyPressEvent(QKeyEvent *evento){
    if(evento->key()==Qt::Key_A){
        if(!personaje->collidesWithItem(muro1_1) && !personaje->collidesWithItem(muro2) && !personaje->collidesWithItem(muro4_2) && !personaje->collidesWithItem(muro5_3) && !personaje->collidesWithItem(muro6_3) && !personaje->collidesWithItem(muro7_4) && !personaje->collidesWithItem(muro8_4)){
            personaje->Left();

        }
    }
    if(evento->key()==Qt::Key_D){
        if(!personaje->collidesWithItem(muro1_2) && !personaje->collidesWithItem(muro4) && !personaje->collidesWithItem(muro2_3) && !personaje->collidesWithItem(muro3_3) && !personaje->collidesWithItem(muro4_1) && !personaje->collidesWithItem(muro7_3) && !personaje->collidesWithItem(muro8_3)){
            personaje->Rigth();
        }

    }
    if(evento->key()==Qt::Key_W){
        if(!personaje->collidesWithItem(muro1_3) && !personaje->collidesWithItem(muro3) && !personaje->collidesWithItem(muro2_2) && !personaje->collidesWithItem(muro3_2) && !personaje->collidesWithItem(muro4_3) && !personaje->collidesWithItem(muro5_2) && !personaje->collidesWithItem(muro6_2) && !personaje->collidesWithItem(muro7_2) && !personaje->collidesWithItem(muro8_2)){
            personaje->Up();
        }
    }
    if(evento->key()==Qt::Key_S){
        if(!personaje->collidesWithItem(muro1_4) && !personaje->collidesWithItem(muro5) && !personaje->collidesWithItem(muro2_1) && !personaje->collidesWithItem(muro3_1) && !personaje->collidesWithItem(muro4_4) && !personaje->collidesWithItem(muro5_1) && !personaje->collidesWithItem(muro6_1) && !personaje->collidesWithItem(muro7_1) && !personaje->collidesWithItem(muro8_1)){
        personaje->Down();
        }

    }
}



MainWindow::~MainWindow()
{
    delete ui;
}

