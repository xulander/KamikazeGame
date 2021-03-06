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

/** My basic Thing virtual function. It has the essentials. Originally, the getX and getY functions
	* were ints, but I made them into floats. Why? Because I only moved some stuff decimals,
	* not a full 1 pixel. It was annoying to change all the subsequent classes that inherited
	* from this, but yolo.
*/

class Thing : public QGraphicsPixmapItem
{

	public:
	//Thing(int, int);
	virtual void move()=0;
	virtual float getX()=0;
	virtual float getY()=0;
	virtual int getLives()=0;
	virtual void decrease()=0;
	
	protected:
	QPixmap *pixmap;
	int lives;
	float x, y, vx, vy;//stands for velocityx, velocityy
	
	
};



	
#endif
