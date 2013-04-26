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

#include "enemy.h"

Enemy::Enemy(int nx, int ny) //: Thing(nx,ny)
{
	pixmap=new QPixmap("enemy.png");
	//pixMap = pm;

	setPixmap(*pixmap);
	x=nx;
	y=ny;
	lives=2;
	vx=1;
	moveX=1;
	fvy = .3;
	fy = y;
	setPos(x,y);

}



void Enemy::decrease()
{
	lives--;
}

int Enemy::getLives()
{
	return lives;
}

void Enemy::move()
{
    	randomNum = rand() %1;
    	switch(randomNum)
    	{
    		case 0:
		this->moveBy(moveX,fvy);
		x+=moveX;
		break;
		
		case 1:
		this->moveBy(-moveX, fvy);
		x-=moveX;
		break;
	}
	fy+=fvy;
	if(x == 0)
	{
		moveX = 1;
	}	
	if(x == MAXWIDTH-50)
	{
		moveX = -1;
	}

}

float Enemy::getX()
{
	return x;
}

float  Enemy::getY()
{
	y = fy;// do this to truncate the val
	return y;
}

