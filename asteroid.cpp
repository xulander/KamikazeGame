
#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "asteroid.h"

/** Asteroid implementation. */

using namespace std;
Asteroid::Asteroid(int nx, int ny) //: Thing(nx,ny)
{
	pixmap=new QPixmap("asteroid.png");
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
	width=.25;
	height=.25;
}
	//Asty can go as far as ( -50 ,-45) and (MAXWIDTH-10, MAXHEIGHT-15);

int Asteroid::getLives()
{
	return lives;
}

void Asteroid::decrease()
{
	lives--;
}

/** This one Ill actually explain. all those specific numbers are assigned by random in the 
	*qgraphics window. After, once they are passed in, the follow a strict set of movements.
	* the height always increments, but the width may vary.
*/
void Asteroid :: move()
{


	if(vx==-50)
	{
		this->moveBy(width, height);
		fx+=width;
		fy+=height;
		//cout << "Am i moving" << endl;
		
	}
	if(vx==590)
	{

		this->moveBy(-width, height);
	
		fx-=width;
		fy+=height;
		//cout << fx << endl;
	}
	if(vy==-45)
	{
		this->moveBy(width, height);
		fx+=width;
		fy+=height;
	}
	if(vy==-44)
	{
		this->moveBy(-width, height);
		fx-=width;
		fy+=height;
	}
	/*if
	{
		this->moveBy(width, height);
		fx+=width;
		fy+=height;
	}*/
	
}

float Asteroid::getX()
{
	return fx;
}

float Asteroid::getY()
{
	return fy;
}

