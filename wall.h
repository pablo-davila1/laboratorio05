#ifndef WALL_H
#define WALL_H
#include <QGraphicsItem>
#include <QPainter>



class wall : public QGraphicsItem
{
    int posx,posy,whith,higth;
public:

    wall();
    wall(int posx,int posy,int whith,int higth);

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) ;
};

#endif // WALL_H
