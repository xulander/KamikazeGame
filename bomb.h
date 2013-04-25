#ifndef BOMB_H
#define BOMB_H
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

class Bomb : public Thing
{	
	public:
	Bomb( int nx, int ny);
	bool detonate();
	void move();

	int getX();
	int getY();	
	
	private:
	QPixmap *detonator;


	
};

#endif
