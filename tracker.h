#ifndef TRACKER_H
#define TRACKER_H
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
#include "spaceship.h"
/** Tracker thing class. */

class Tracker : public Thing
{

	public:
	Tracker(int, int, Spaceship*);
	int getLives();
	float getX();
	float getY();
	void move();
	void decrease();
	private:
	float width;
	Spaceship *spacey;
	float height;
	float fx, fy; //using f to stand for float. its to slow down those damn asteroids
	
};


#endif
