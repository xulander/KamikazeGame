#ifndef BACKGROUND_H
#define BACKGROUND_H
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

class Background : public Thing
{

	public:
	Background(int, int);
	int getLives();
	float getX();
	float getY();
	void move();
	void decrease();
	private:
	double newY;
	
};


#endif
