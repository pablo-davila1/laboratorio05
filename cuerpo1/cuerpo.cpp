#include "cuerpo.h"

cuerpo::cuerpo()
{

}

cuerpo::cuerpo(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx, posy);

}

int cuerpo::getR()
{
    return r;
}

void cuerpo::setR(int radio)
{
    r = radio;
}

int cuerpo::getPosx()
{
    return posx;
}

void cuerpo::setPosx(int px)
{
    posx=px;
}

int cuerpo::getPosy()
{
    return posy;
}

void cuerpo::setPosy(int py)
{
    posy = py;
}

QRectF cuerpo::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::green);
    painter->drawEllipse(boundingRect());
}

void cuerpo::Up()
{
    posy -= 2*velocidad;
    setPos(posx,posy);
}

void cuerpo::Down()
{
    posy += 2*velocidad;
    setPos(posx,posy);
}

void cuerpo::Left()
{
    posx -= 2*velocidad;
    setPos(posx,posy);
}

void cuerpo::Rigth()
{
    posx += 2*velocidad;
    setPos(posx,posy);
}
