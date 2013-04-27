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

/** Lives decrease if hit. You know how a player do.
*/

Spaceship::Spaceship(int nx, int ny) //: Thing(nx,ny)
{

	pixmap=new QPixmap("newship.png");
	//pixMap = pm;

	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);
	lives=15;

}

void Spaceship::decrease()
{
	lives--;
}

int Spaceship::getLives()
{
	return lives;
}

float Spaceship::getX()
{
	return x;
}

float Spaceship::getY()
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

