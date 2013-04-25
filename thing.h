#ifndef THING_H
#define THING_H

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

#define MAXHEIGHT 600
#define MAXWIDTH 600

class Thing : public QGraphicsPixmapItem
{

	public:
	//Thing(int, int);
	virtual void move()=0;
	virtual int getX()=0;
	virtual int getY()=0;
	
	protected:
	QPixmap *pixmap;
	int x, y, vx, vy;//stands for velocityx, velocityy
	
};



	
#endif
