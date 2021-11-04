#include "wall.h"

wall::wall()
{

}

wall::wall(int pos_x, int pos_y, int whith_, int higth_)
{
    this->posx=pos_x;
    this->posy = pos_y;
    this->whith = whith_;
    this->higth = higth_;
    setPos(posx,posy);
}

QRectF wall::boundingRect() const
{
    return  QRect(-whith,-higth,whith,higth);
}

void wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::black);
    painter->drawRect(boundingRect());
}
