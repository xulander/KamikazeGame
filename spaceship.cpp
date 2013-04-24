#include <QAction>
#include <cmath>
#include <QFormLayout>
#include <QLineEdit>

#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "spaceship.h"

Spaceship::Spaceship(int nx, int ny) //: Thing(nx,ny)
{

	pixmap=new QPixmap("newship.png");
	//pixMap = pm;

	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);

}

int Spaceship::getX()
{
	return x;
}

int Spaceship::getY()
{
	return y;
}

void Spaceship::move()
{

}


void Spaceship::up()
{
	y--;

}

void Spaceship::down()
{
	y++;
}
void Spaceship::left()
{
	x--;
}
void Spaceship::right()
{
	x++;
}

