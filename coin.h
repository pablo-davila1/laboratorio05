#ifndef COIN_H
#define COIN_H
#include <QGraphicsItem>
#include <QPainter>

class coin : public QGraphicsItem
{
    int posx,posy,radio;
public:
    coin();
    coin(int x, int y, int r);

    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) ;

    void destructor_(coin *c);
};

#endif // COIN_H
