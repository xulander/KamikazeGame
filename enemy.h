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

class Enemy : public Thing
{

	public:
	Enemy(int, int);
	~Enemy();
	void move();
	
};


#endif
