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
//#include "thing.h"
#include "enemy.h"
//#include "enemy.cpp"
#include "spaceship.h"
#include "asteroid.h"

#include <QApplication>
#include <iostream>
#include "background.h"


#define MAXHEIGHT 600
#define MAXWIDTH 600

class GraphicsWindow : public QGraphicsView
{
Q_OBJECT
	public:
	GraphicsWindow();
	void keyPressEvent (QKeyEvent *e);
	void keyReleaseEvent(QKeyEvent *e);

	public slots:
	void handleTimer();
	
	private: 
	bool up, down, left, right;


	int counter;
	QGraphicsScene *scene;
	Background *scroll;
	QPushButton *go;
	Spaceship *space;
	Enemy *enemy;
	QTimer *timer;
	Asteroid *asty;
	
};

#endif
