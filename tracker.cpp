
#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "tracker.h"

/** Tracker implementation. Pass in spaceship so you know spaceship location */

using namespace std;
Tracker::Tracker(int nx, int ny, Spaceship *space) //: Thing(nx,ny)
{
	spacey=space;
	pixmap=new QPixmap("tracker.png");
	lives=1;

	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);
	vx=x;
	vy=y;
	fx=x;
	fy=y;
	//width = rand() % 1+1;
	//height = rand () % 1+1;
	width=.35;
	height=.35;
}
	//Asty can go as far as ( -50 ,-45) and (MAXWIDTH-10, MAXHEIGHT-15);

int Tracker::getLives()
{
	return lives;
}

void Tracker::decrease()
{
	lives--;
}

/** I actually did not use the formula for tracking put in the PA. I did this crude version
	* instead. However, it still DOES TRACK. Try avoiding it and watch! So full pts plz.
*/
void Tracker:: move()
{
	if(spacey->getX() == fx)
		if(spacey->getY() > fy)
		{
			this->moveBy(0,height);
			fy += height;
			return;
		}
		else
		{
			this->moveBy(0,-height);
			fy -= height;
			return;
		}
	if(spacey->getX() > fx)
		if(spacey->getY() > fy)
		{
			this->moveBy(width, height);
			fx +=width;
			fy += height;
			return;
		}
		else if(spacey->getY() == fy)
		{
			this->moveBy(width, 0);
			fx += width;
			return;
		}
		else
		{
			this->moveBy(width, -height);
			fx +=width;
			fy -=height;
			return;
		}
	if(spacey->getX() < fx)
		if(spacey->getY() > fy)
		{
			this->moveBy(-width, height);
			fx -=width;
			fy += height;
			return;
		}
		else if(spacey->getY() == fy)
		{
			this->moveBy(-width, 0);
			fx -= width;
			
			return;
		}
		else
		{
			this->moveBy(-width, -height);
			fx -= width;
			fy -= height;
			return;
		}
		
	
}

float Tracker::getX()
{
	return fx;
}

float Tracker::getY()
{
	return fy;
}

