
#include <QApplication>
#include <iostream>
#include <QGraphicsPixmapItem>
#include <QPalette>
#include <QPixmap>
#include <QSize>

#include "background.h"



Background::Background(int nx, int ny) //: Thing(nx,ny)
{
	pixmap=new QPixmap("scroller.jpg");
	this->setZValue(-4);

	setPixmap(*pixmap);
	x=nx;
	newY=ny;
	setPos(x,newY);

}


void Background::move()
{
	newY+=.5;

	if(newY==0)
	{
		this->moveBy(0,-1000);
		newY=-1000;
	}
}


