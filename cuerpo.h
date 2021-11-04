#ifndef CUERPO_H
#define CUERPO_H
#include <QGraphicsItem>
#include <QPainter>

class cuerpo : public QGraphicsItem
{
    int posx,posy,radio;

public:
    cuerpo();
    cuerpo(int pos_x, int pos_y, int r);

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) ;
    void move_lef();
    void move_rith();
    void move_up();
    void move_down();


    int getPosx() const;
    int getPosy() const;

    void setPosy(int value);
    void setPosx(int value);
};

#endif // CUERPO_H
