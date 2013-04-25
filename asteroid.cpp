
#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "asteroid.h"


Asteroid::Asteroid(int nx, int ny) //: Thing(nx,ny)
{
	pixmap=new QPixmap("asteroid.png");


	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);
	vx=x;
	vy=y;
	//width = rand() % 1+1;
	//height = rand () % 1+1;
	width=.35;
	height=.35;
}
	//Asty can go as far as ( -50 ,-45) and (MAXWIDTH-10, MAXHEIGHT-15);

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

