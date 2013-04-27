#ifndef SPACESHIP_H
#define SPACESHIP_H
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

/** Do the inheritance party! For my spaceship herooooo */

class Spaceship : public Thing
{	
	public:
	Spaceship( int nx, int ny);
	void move();
	void up();
	void down();
	void left();
	void right();
	int getLives();
	void decrease();
	float getX();
	float getY();	


	
};

#endif
