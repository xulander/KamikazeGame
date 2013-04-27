#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "boss.h"

/** Boss, or eamon constructor and class. */
Boss::Boss(int nx, int ny) //: Thing(nx,ny)
{
	pixmap=new QPixmap("boss.png");
	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);
	lives=9999;

}


int Boss::getLives()
{

}

void Boss::decrease()
{

}

void Boss:: move()
{

}

float Boss::getX()
{
	return x;
}

float Boss::getY()
{
	return y;
}
