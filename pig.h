#ifndef PIG_H
#define PIG_H
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
#include "bomb.h"

/** Pig thing class. */

class Pig : public Thing
{

	public:
	Pig(int, int);
	int getLives();
	float getX();
	float getY();
	void move(Bomb*);
	void move();
	void decrease();
	private:
	Bomb * bombiez;
	float width;
	float height;
	float fx, fy; //using f to stand for float. its to slow down those damn asteroids
	
};


#endif
