#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cuerpo.h>
#include <pared.h>
#include <QGraphicsScene>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    cuerpo *personaje;
    pared *muro1_1;
    pared *muro1_2;
    pared *muro1_3;
    pared *muro1_4;
    pared *muro2;
    pared *muro3;
    pared *muro4;
    pared *muro5;
    pared *muro2_1;
    pared *muro2_2;
    pared *muro2_3;
    pared *muro3_1;
    pared *muro3_2;
    pared *muro3_3;
    pared *muro4_1;
    pared *muro4_2;
    pared *muro4_3;
    pared *muro4_4;
    pared *muro5_1;
    pared *muro5_2;
    pared *muro5_3;
    pared *muro6_1;
    pared *muro6_2;
    pared *muro6_3;
    pared *muro7_1;
    pared *muro7_2;
    pared *muro7_3;
    pared *muro7_4;
    pared *muro8_1;
    pared *muro8_2;
    pared *muro8_3;
    pared *muro8_4;

    QGraphicsScene *scene;

    void keyPressEvent(QKeyEvent * evento);

};
#endif // MAINWINDOW_H
