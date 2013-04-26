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

#include "enemy.h"
#include "spaceship.h"
#include "asteroid.h"
#include "laser.h"
#include "boss.h"

#include "bomb.h"
#include <QApplication>
#include <iostream>
#include "background.h"

#include "shiplife.h"
#include "life.h"


#define MAXHEIGHT 600
#define MAXWIDTH 600
using namespace std;
class GraphicsWindow : public QGraphicsView
{
Q_OBJECT
	public:
	GraphicsWindow(QString);
	void keyPressEvent (QKeyEvent *e);
	void keyReleaseEvent(QKeyEvent *e);
	void addScore(int);
	int getInt();
	QString getScore();

	public slots:
	void handleTimer();
	void bombTimer();
	
	private: 
	bool up, down, left, right, bomb, detonation, pause;
	QString s;
	QTimer *timeBomb;
	
	Boss *boss;
	int interval;
	QLineEdit *ready;
	int counter, bombCounter, random, width, height, score;
	QGraphicsScene *scene;
	Background *scroll;
	QPushButton *go;
	Spaceship *space;
	Enemy *enemy;
	QTimer *timer;
	Laser *lazy;
	Asteroid *asty;
	Bomb *bomby;

	
	int b;
	
	QLineEdit *winning;
	QString scored;
	Shiplife *lives;
	Life *text;
	
	vector<Thing*> lifeCounter;
	vector<Laser*> bullets;
	vector<Thing*> baddies;
	vector<Bomb*> bombay;
};

#endif
