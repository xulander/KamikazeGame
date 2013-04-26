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

#include "shiplife.h"


Shiplife::Shiplife(int nx, int ny) 
{

	pixmap=new QPixmap("shipLives.png");

	setPixmap(*pixmap);
	x=nx;
	y=ny;
	setPos(x,y);

	
}






void Shiplife:: move(){}
float Shiplife:: getX(){return x;}
float Shiplife:: getY(){return y;}
int Shiplife::getLives(){}
void Shiplife::decrease(){}
