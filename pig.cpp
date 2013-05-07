
#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "pig.h"

/** Tracker implementation. Pass in spaceship so you know spaceship location */

using namespace std;
Pig::Pig(int nx, int ny) //: Thing(nx,ny)
{

	pixmap=new QPixmap("pig.png");
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

int Pig::getLives()
{
	return lives;
}

void Pig::decrease()
{
	lives--;
}

/** I actually did not use the formula for tracking put in the PA. I did this crude version
	* instead. This pig just avoids getting touched. Once touched, it will disapear
*/
void Pig::move()
{}
void Pig:: move(Bomb *bomby)
{
//if going up is in the range of that item, move it
//if fy bomby->getY() - 5, bomby->getY() + 5
// if 

		if((fx+40) <= MAXWIDTH)
		{
			this->moveBy(40,0);
			return;
		}
		if((fx-40) >= 0)
		{
			this->moveBy(-40,0);
			return;
		}
	
	
}

float Pig::getX()
{
	return fx;
}

float Pig::getY()
{
	return fy;
}

