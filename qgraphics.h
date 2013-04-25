#ifndef QGRAPHICS_H
#define QGRAPHICS_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QTimeLine>
#include <QToolBar>
#include <QGraphicsItemAnimation>
#include <QListView>
#include <QPushButton>
#include <QHBoxLayout>
#include <QListWidget>
#include <QVBoxLayout>
#include <QAction>
#include <cmath>
#include <QFormLayout>
#include <QLineEdit>

#include <vector>
//#include "thing.h"
#include "enemy.h"
//#include "enemy.cpp"
#include "spaceship.h"
#include "asteroid.h"
#include "laser.h"
//#include "queue.h"
//#include "queue.h"
#include "bomb.h"
#include <QApplication>
#include <iostream>
#include "background.h"


#define MAXHEIGHT 600
#define MAXWIDTH 600
using namespace std;
class GraphicsWindow : public QGraphicsView
{
Q_OBJECT
	public:
	GraphicsWindow();
	void keyPressEvent (QKeyEvent *e);
	void keyReleaseEvent(QKeyEvent *e);

	public slots:
	void handleTimer();
	void bombTimer();
	
	private: 
	bool up, down, left, right, bomb, detonation;

	QTimer *timeBomb;

	int counter, bombCounter, random, width, height;
	QGraphicsScene *scene;
	Background *scroll;
	QPushButton *go;
	Spaceship *space;
	Enemy *enemy;
	QTimer *timer;
	Laser *lazy;
	Asteroid *asty;
	Bomb *bomby;

	vector<Laser*> bullets;
	vector<Thing*> baddies;
	vector<Bomb*> bombay;
};

#endif
