#include "mainwindow.h"
#include "ui_mainwindow.h"

QList <wall*> walls;
QList <coin*> coins;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,650,590);
    scene->setBackgroundBrush(Qt::blue);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    pacman = new cuerpo(scene->width()/2 -25 ,scene->height()/2 -7,25);
    scene->addItem(pacman);

    walls.push_back(wall1 = new wall(400,320,180,5));//muro superior horizontal (-)
    walls.push_back(wall1_1 = new wall(400,325,180,5));//muro inferior horizontal(_)
    walls.push_back(wall1_2 = new wall(400-179,325,10,10));//muro lateral izquerdo(|_)
    walls.push_back(wall1_3 = new wall(400,325,10,10));//muro lateral derecho(_|)

    walls.push_back(wall2 = new wall(400,320-63,10,10));//muro superior horizontal (-)
    walls.push_back(wall2_1 = new wall(395,320,5,70));//muro lateral izquerdo(|_)
    walls.push_back(wall2_2 = new wall(400,320,5,70));//muro lateral derecho(_|)

    walls.push_back(wall3 = new wall(400-180,320-63,10,10));//muro superior horizontal (-)
    walls.push_back(wall3_1 = new wall(395-180,320,5,70));//muro lateral izquerdo(|_)
    walls.push_back(wall3_2 = new wall(400-180,320,5,70));//muro lateral derecho(_|)

    walls.push_back(wall4 = new wall(400,320-70,55,5));//muro superior horizontal (-)
    walls.push_back(wall4_1 = new wall(400,325-70,55,5));//muro inferior horizontal(_)
    walls.push_back(wall4_2 = new wall(400-54,325-70,10,10));//muro lateral izquerdo(|_)

    walls.push_back(wall5 = new wall(400-180+45,320-70,55,5));//muro superior horizontal (-)
    walls.push_back(wall5_1 = new wall(400-180+45,325-70,55,5));//muro inferior horizontal(_)
    walls.push_back(wall5_2 = new wall(400-180+45,325-70,10,10));//muro lateral derecho(|_)

    walls.push_back(wall6 = new wall(389,420,161,5));//muro superior horizontal (-)
    walls.push_back(wall6_1 = new wall(389,425,161,5));//muro inferior horizontal(_)
    walls.push_back(wall6_2 = new wall(389-151,425,10,10));//muro lateral izquerdo(|_)
    walls.push_back(wall6_3 = new wall(389,425,10,10));//muro lateral derecho(_|)

    walls.push_back(wall7 = new wall(315,480,10,10));//muro inferior horizontal(_)
    walls.push_back(wall7_1 = new wall(315,480,5,61));//muro lateral derecho(_|)
    walls.push_back(wall7_2 = new wall(310,480,5,61));//muro lateral izquerdo(|_)

    walls.push_back(wall8 = new wall(315,590-41,10,10));//muro superior horizontal (-)
    walls.push_back(wall8_1 = new wall(315,590,5,51));//muro lateral derecho(_|)
    walls.push_back(wall8_2 = new wall(310,590,5,51));//muro lateral izquerdo(|_)

    walls.push_back(wall9 = new wall(389,100,161,5));//muro superior horizontal (-)
    walls.push_back(wall9_1 = new wall(389,105,161,5));//muro inferior horizontal(_)
    walls.push_back(wall9_2 = new wall(389-151,105,10,10));//muro lateral izquerdo(|_)
    walls.push_back(wall9_3 = new wall(389,105,10,10));//muro lateral derecho(_|)

    walls.push_back(wall10 = new wall(310,95,5,100));//muro lateral derecho(_|)
    walls.push_back(wall10_1 = new wall(305,95,5,100));//muro lateral izquerdo(|_)

    walls.push_back(wall11 = new wall(145,260-130,10,5));//muro superior horizontal (-)
    walls.push_back(wall11_1 = new wall(145,263,10,5));//muro inferior horizontal(_)
    walls.push_back(wall11_2 = new wall(140,260,5,131));//muro lateral izquerdo(|_)
    walls.push_back(wall11_3 = new wall(145,260,5,131));//muro lateral derecho(_|)

    walls.push_back(wall12 = new wall(475,260-130,10,5));//muro superior horizontal (-)
    walls.push_back(wall12_1 = new wall(475,263,10,5));//muro inferior horizontal(_)
    walls.push_back(wall12_2 = new wall(470,260,5,131));//muro lateral izquerdo(|_)
    walls.push_back(wall12_3 = new wall(475,260,5,131));//muro lateral derecho(_|)

    walls.push_back(wall13 = new wall(145,470-130,10,5));//muro superior horizontal (-)
    walls.push_back(wall13_1 = new wall(145,473,10,5));//muro inferior horizontal(_)
    walls.push_back(wall13_2 = new wall(140,470,5,131));//muro lateral izquerdo(|_)
    walls.push_back(wall13_3 = new wall(145,470,5,131));//muro lateral derecho(_|)

    walls.push_back(wall14 = new wall(475,470-130,10,5));//muro superior horizontal (-)
    walls.push_back(wall14_1 = new wall(475,473,10,5));//muro inferior horizontal(_)
    walls.push_back(wall14_2 = new wall(470,470,5,131));//muro lateral izquerdo(|_)
    walls.push_back(wall14_3 = new wall(475,470,5,131));//muro lateral derecho(_|)

    walls.push_back(wall15 = new wall(70,260,70,10));//muro superior horizontal (-)
    walls.push_back(wall15_1 = new wall(70,270,70,10));//muro inferior horizontal(_)
    walls.push_back(wall15_2 = new wall(75,270,5,20));//muro lateral derecho(_|)

    walls.push_back(wall16 = new wall(70,260+80,70,10));//muro superior horizontal (-)
    walls.push_back(wall16_1 = new wall(70,270+80,70,10));//muro inferior horizontal(_)
    walls.push_back(wall16_2 = new wall(75,270+80,5,20));//muro lateral derecho(_|)

    walls.push_back(wall17 = new wall(650,260+80,70,10));//muro superior horizontal (-)
    walls.push_back(wall17_1 = new wall(650,270+80,70,10));//muro inferior horizontal(_)
    walls.push_back(wall17_2 = new wall(580,270+80,5,20));//muro lateral izquerdo(|_)

    walls.push_back(wall18 = new wall(650,260,70,10));//muro superior horizontal (-)
    walls.push_back(wall18_1 = new wall(650,270,70,10));//muro inferior horizontal(_)
    walls.push_back(wall18_2 = new wall(580,270,5,20));//muro lateral izquerdo(|_)

    coins.push_back(coin1 = new coin (100,80,5));
    coins.push_back(coin2 = new coin (100,280,5));
    coins.push_back(coin3 = new coin (100,480,5));
    coins.push_back(coin4 = new coin (540,80,5));
    coins.push_back(coin5 = new coin (540,280,5));
    coins.push_back(coin6 = new coin (540,480,5));
    coins.push_back(coin7 = new coin (400,170,5));
    coins.push_back(coin8 = new coin (200,170,5));
    coins.push_back(coin9 = new coin (310,510,5));


    for (int i=0; i<walls.size() ; i++){
        scene->addItem(walls[i]);
    }

    for (int i=0; i<coins.size() ; i++){
        scene->addItem(coins[i]);
    }

    Score = new score();
    scene->addItem(Score);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event){

    if(event->key() == Qt::Key_A && pacman->getPosx() > 25 && !pacman->collidesWithItem(wall1_3) && !pacman->collidesWithItem(wall2_2) && !pacman->collidesWithItem(wall3_2)
      && !pacman->collidesWithItem(wall5_2) && !pacman->collidesWithItem(wall6_3) && !pacman->collidesWithItem(wall7_1)&& !pacman->collidesWithItem(wall8_1) && !pacman->collidesWithItem(wall9_3)
      && !pacman->collidesWithItem(wall10)&& !pacman->collidesWithItem(wall11_3)&& !pacman->collidesWithItem(wall12_3) && !pacman->collidesWithItem(wall13_3)
      && !pacman->collidesWithItem(wall14_3)&& !pacman->collidesWithItem(wall15_2)&& !pacman->collidesWithItem(wall16_2))
        pacman->move_lef();

    if(event->key() == Qt::Key_D && pacman->getPosx() < scene->width()- 25 && !pacman->collidesWithItem(wall1_2) && !pacman->collidesWithItem(wall2_1)
      && !pacman->collidesWithItem(wall3_1) && !pacman->collidesWithItem(wall4_2) && !pacman->collidesWithItem(wall6_2) && !pacman->collidesWithItem(wall7_2)
      && !pacman->collidesWithItem(wall8_2) && !pacman->collidesWithItem(wall9_2)&& !pacman->collidesWithItem(wall10_1)&& !pacman->collidesWithItem(wall11_2)
      && !pacman->collidesWithItem(wall12_2)&& !pacman->collidesWithItem(wall13_2)&& !pacman->collidesWithItem(wall14_2) && !pacman->collidesWithItem(wall17_2)
      && !pacman->collidesWithItem(wall18_2))
        pacman->move_rith();

    if(event->key() == Qt::Key_W && pacman->getPosy() > 25 && !pacman->collidesWithItem(wall1_1) && !pacman->collidesWithItem(wall4_1)
      && !pacman->collidesWithItem(wall5_1) && !pacman->collidesWithItem(wall6_1) && !pacman->collidesWithItem(wall7) && !pacman->collidesWithItem(wall9_1)
      && !pacman->collidesWithItem(wall11_1)&& !pacman->collidesWithItem(wall12_1)&& !pacman->collidesWithItem(wall13_1)&& !pacman->collidesWithItem(wall14_1)
      && !pacman->collidesWithItem(wall15_1)&& !pacman->collidesWithItem(wall16_1)&& !pacman->collidesWithItem(wall17_1)&& !pacman->collidesWithItem(wall18_1))
        pacman->move_up();

    if(event->key() == Qt::Key_S && pacman->getPosy() < scene->height() -25 && !pacman->collidesWithItem(wall1) && !pacman->collidesWithItem(wall2)
      && !pacman->collidesWithItem(wall3) && !pacman->collidesWithItem(wall4) && !pacman->collidesWithItem(wall5) && !pacman->collidesWithItem(wall6)
      && !pacman->collidesWithItem(wall8) && !pacman->collidesWithItem(wall9) && !pacman->collidesWithItem(wall11)&& !pacman->collidesWithItem(wall12)
      && !pacman->collidesWithItem(wall13) && !pacman->collidesWithItem(wall14) && !pacman->collidesWithItem(wall15) && !pacman->collidesWithItem(wall16) && !pacman->collidesWithItem(wall17)
      && !pacman->collidesWithItem(wall18))
        pacman->move_down();

    if(pacman->getPosx() < 30 && 295 < pacman->getPosy() && pacman->getPosy() < 315){
        pacman->setPosx(580);
        pacman->setPosy(300);
        pacman->setPos(pacman->getPosx(),pacman->getPosy());
    }
    if(pacman->getPosx() > 586 && 295 < pacman->getPosy() && pacman->getPosy() < 315){
        pacman->setPosx(31);
        pacman->setPosy(300);
        pacman->setPos(pacman->getPosx(),pacman->getPosy());
    }

    for(int i = 0; i<coins.size();i++ ){
        if(pacman->collidesWithItem(coins[i])){
            scene->removeItem(coins[i]);
            //delete(coins[i]);
            Score->increase();
        }
    }
}
