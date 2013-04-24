
#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "asteroid.h"


Asteroid::Asteroid(int nx, int ny) //: Thing(nx,ny)
{
	pixmap=new QPixmap("asteroid-sprite.gif");


	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);

}

void Asteroid :: move()
{}
