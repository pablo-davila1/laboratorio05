#include "coin.h"
#include "mainwindow.h"

coin::coin()
{

}

coin::coin(int x, int y, int r)
{
    this->posx=x;
    this->posy=y;
    this->radio=r;
    setPos(posx,posy);
}

QRectF coin::boundingRect() const
{
    return QRect(-radio,-radio,radio*2,radio*2);
}

void coin::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::white);
    painter->drawEllipse(boundingRect());
}

void coin::destructor_(coin *c)
{
   scene()->removeItem(c);
   //delete this;

}
