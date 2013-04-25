#ifndef ASTEROID_H
#define ASTEROID_H
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
#include "thing.h"



class Asteroid : public Thing
{

	public:
	Asteroid(int, int);
	int getLives();
	int getX();
	int getY();
	void move();
	void decrease();
	private:
	float width;
	float height;
	float fx, fy; //using f to stand for float. its to slow down those damn asteroids
	
};


#endif
