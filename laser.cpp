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

#include "laser.h"

using namespace std;

/** im da laser like tick, tick*/

Laser::Laser(int nx, int ny) //: Thing(nx,ny)
{

	pixmap=new QPixmap("dabomb.png");
	//pixMap = pm;
	
	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);

}

float Laser::getX()
{
	return x;
}

float Laser::getY()
{
	return y;
}

void Laser::move()
{
	this->moveBy(0,-3);
	y-=3;

}

void Laser::decrease()
{
	lives--;
}

int Laser::getLives()
{
	return 0;
}


