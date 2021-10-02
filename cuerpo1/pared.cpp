#include "pared.h"

pared::pared()
{

}

pared::pared(int w_, int h_, int x, int y)
{
    w = w_;
    h = h_;
    posx = x;
    posy = y;
}

int pared::getW()
{
    return w;
}

int pared::getH()
{
    return h;
}

void pared::setW(int ancho)
{
    w = ancho;
}

void pared::setH(int altura)
{
    h = altura;
}


int pared::getPosx()
{
    return posx;
}

void pared::setPosx(int px)
{
    posx=px;
}

int pared::getPosy()
{
    return posy;
}

void pared::setPosy(int py)
{
    posy = py;
}

QRectF pared::boundingRect() const
{
    return QRectF(-posx,-posy,w,h);
}

void pared::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
