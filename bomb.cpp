#include <QAction>
#include <cmath>
#include <QFormLayout>
#include <QLineEdit>
#include <vector>
#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "bomb.h"

using namespace std;

/** Bomb implementation. Simple stuff */

int Bomb::getLives()
{
	return 0;
}

void Bomb::decrease()
{
	lives--;
}

Bomb::Bomb(int nx, int ny) //: Thing(nx,ny)
{

	pixmap=new QPixmap("bombmain.png");
	detonator = new QPixmap("BlueExplosion.png");
	//pixMap = pm;

	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);

}

float Bomb::getX()
{
	return x;
}

float Bomb::getY()
{
	return y;
}

void Bomb::move()
{
	this->moveBy(0,-1);
	y-=1;

}

bool Bomb::detonate()
{
	//delete pixmap;
	setPixmap(*detonator);
	this->moveBy(-50, -65);
	return true;
}




