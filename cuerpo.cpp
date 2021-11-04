#include "cuerpo.h"

int cuerpo::getPosx() const
{
    return posx;
}


int cuerpo::getPosy() const
{
    return posy;
}


void cuerpo::setPosy(int value)
{
    posy = value;
}

void cuerpo::setPosx(int value)
{
    posx = value;
}

cuerpo::cuerpo()
{
    
}

cuerpo::cuerpo(int pos_x, int pos_y, int r)
{
    this->posx = pos_x;
    this->posy = pos_y;
    this->radio=r;
    setPos(posx,posy);

}

QRectF cuerpo::boundingRect() const
{
    return QRect(-radio,-radio,radio*2,radio*2);
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawEllipse(boundingRect());
}

void cuerpo::move_lef()
{
    posx-=5;
    setPos(posx,posy);

}

void cuerpo::move_rith()
{
    posx+=5;
    setPos(posx,posy);

}

void cuerpo::move_up()
{
    posy-=5;
    setPos(posx,posy);
}

void cuerpo::move_down()
{
    posy+=5;
    setPos(posx,posy);
}





