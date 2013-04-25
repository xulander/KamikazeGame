#ifndef BOSS_H
#define BOSS_H
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



class Boss : public Thing
{

	public:
	Boss(int, int);
	int getLives();
	int getX();
	int getY();
	void move();
	void decrease();

	
};


#endif
