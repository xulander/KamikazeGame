
#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "boss.h"


Boss::Boss(int nx, int ny) //: Thing(nx,ny)
{
	pixmap=new QPixmap("asteroid.png");
	lives=30;

	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);
}


int Asteroid::getLives()
{
	return lives;
}

void Asteroid::decrease()
{
	lives--;
}

void Asteroid :: move()
{


	if(vx==-50)
	{
		this->moveBy(width, height);
		fx+=width;
		fy+=height;
		
	}
	else if(vx==MAXWIDTH-10)
	{

		this->moveBy(-width, height);
	
		fx-=width;
		fy+=height;
	}
	else if(vy==-45)
	{
		this->moveBy(width, height);
		fx+=width;
		fy+=height;
	}
	else if(vy==-44)
	{
		this->moveBy(-width, height);
		fx-=width;
		fy+=height;
	}
	else
	{
		this->moveBy(width, height);
		fx+=width;
		fy+=height;
	}
	
}

int Asteroid::getX()
{
	return x;
}

int Asteroid::getY()
{
	return y;
}

