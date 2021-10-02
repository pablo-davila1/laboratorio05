#ifndef CUERPO_H
#define CUERPO_H
#include <QGraphicsItem>
#include <QPainter>


class cuerpo : public QGraphicsItem
{
    int r;
    int posx, posy;
    int velocidad = 5;



public:
    cuerpo();
    cuerpo (int r_, int x, int y);
    int getR();
    void setR(int radio);
    int getPosx();
    void setPosx(int px);
    int getPosy();
    void setPosy(int py);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void Up();
    void Down();
    void Left();
    void Rigth();


};

#endif // CUERPO_H
