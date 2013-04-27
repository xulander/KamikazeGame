#ifndef ENEMY_H
#define ENEMY_H
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

/** Enemy thing. Floats like butterfly, stings like a rhinoceros.....or a bee. */
class Enemy : public Thing
{

	public:
	Enemy(int, int);

	float getX();
	float getY();
	int randomNum;
	int getLives();
	void decrease();
	void move();

	int moveX;
	float fy, fvy;
	
};


#endif
