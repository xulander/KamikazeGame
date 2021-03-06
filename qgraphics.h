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
#include <string>
#include <QFormLayout>
#include <QLabel>
#include <fstream>
#include <QLineEdit>
#include "pig.h"

#include <vector>

#include "enemy.h"
#include "spaceship.h"
#include "asteroid.h"
#include "laser.h"
#include "boss.h"

#include "bomb.h"
#include <QApplication>
#include "tracker.h"
#include <iostream>
#include "background.h"

#include "shiplife.h"
#include "life.h"

/** Wht more can i say. This is where the magic is all implemented. This is like the castle, where
	* uncle Merlin practices his spells before using it on the idiot people of the dark ages.
	* Hah. the dark ages...
	* Here is just all my pointer and basic declarations. Will go more in detail in cpp.
	* only thing of significance is the constructor, which passses in a
	* @param of QString. This QString holds the players name, so I can put it in the bottom 
	* left.
*/

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
	void endScreen();

	public slots:
	void handleTimer();
	void bombTimer();
	
	private: 
	bool up, down, left, right, bomb, detonation, pause, scroller;
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
	
	Tracker *tracky;
	Pig *piggy;

	
	int b;
	
	QLineEdit *winning;
	QString scored;
	Shiplife *lives;
	Life *text;
	QLineEdit *playerScore;
	QLineEdit *player;
	QString username1;
	
	
	
	vector<Thing*> lifeCounter;
	vector<Laser*> bullets;
	vector<Thing*> baddies;
	vector<Bomb*> bombay;
};

#endif
