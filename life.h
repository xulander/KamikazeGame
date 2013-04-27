#ifndef LIFE_H
#define LIFE_H
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

/**Life white icon*/

class Life : public Thing
{	
	public:
	Life(int, int);
	void move();
	float getX();
	float getY();
	int getLives();
	void decrease();
	
};
	

#endif
