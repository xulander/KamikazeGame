#ifndef LASER_H
#define LASER_H
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
#include <vector>


#include "thing.h"

/** Pew pew thing lasers! */
using namespace std;

class Laser : public Thing
{	
	public:
	Laser( int nx, int ny);
	int getLives();
	void move();
	void decrease();
	float getX();
	float getY();	


	
};

#endif
