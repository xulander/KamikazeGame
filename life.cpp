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

#include "life.h"


Life::Life(int nx, int ny) 
{

	pixmap=new QPixmap("Lives.png");

	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);
	
}

void Life:: move(){}
float Life:: getX(){return x;}
float Life:: getY(){ return y;}
int Life::getLives(){}
void Life::decrease(){}
