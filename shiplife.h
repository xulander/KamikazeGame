#ifndef SHIPLIFE_H
#define SHIPLIFE_H
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
#include <QString>


#include "thing.h"

/** Shiplife. This is the little mini icons of my ship at the top. It will let you know how many
	* lives you have left.
*/

class Shiplife : public Thing
{	
	public:
	Shiplife(int, int);
	void move();
	float getX();
	float getY();
	void addScore(int);
	int getLives();
	void decrease();


};
	

#endif
