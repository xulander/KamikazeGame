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

	void move();
	
};


#endif
