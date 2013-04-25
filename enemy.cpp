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
	setPos(x,y);

}

void Enemy::move()
{}

int Enemy::getX()
{
	return x;
}

int Enemy::getY()
{
	return y;
}

