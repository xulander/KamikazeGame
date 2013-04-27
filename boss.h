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

/** Boss, aka Eamon. Hes just like a blackhole. If you touch him, you die. None of the bullets
	* work on him.
*/

class Boss : public Thing
{

	public:
	Boss(int, int);
	int getLives();
	float getX();
	float getY();
	void move();
	void decrease();
	


	
};

#endif
