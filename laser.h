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

using namespace std;

class Laser : public Thing
{	
	public:
	Laser( int nx, int ny);

	void move();

	int getX();
	int getY();	


	
};

#endif
