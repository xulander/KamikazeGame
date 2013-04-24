
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
#include <QPalette>
#include <QPixmap>
#include <QFont>
#include <QLineEdit>
#include <QApplication>
#include <iostream>
#include <QSize>
#include <QKeyEvent>
#include "qgraphics.h"


//class Thing;

using namespace std;

void GraphicsWindow::keyPressEvent(QKeyEvent *e)
{
	int key = e->key();
	
	switch(key)
	{
		case Qt::Key_Right:
			right=true;
		break;
		
		case Qt::Key_Left:
			left=true;
		break;
		
		case Qt::Key_Up:
			up=true;
		break;
		
		case Qt::Key_Down:
			down=true;
		break;
	}

	
}

void GraphicsWindow::keyReleaseEvent(QKeyEvent *e)
{
	int key = e->key();
	
	switch(key)
	{
		case Qt::Key_Right:
			right=false;
			break;
			
		case Qt::Key_Left:
			left=false;
		break;
		
		case Qt::Key_Up:
			up=false;
		break;
		
		case Qt::Key_Down:
			down=false;
		break;
	}
}

GraphicsWindow::GraphicsWindow()//set Scrolling background. Thats it. 
{
	counter=0;	
	up=down=left=right=false;
	

	
	
    	timer = new QTimer(this);
    	timer->setInterval(5);
	
	
	setSceneRect(0,0,MAXHEIGHT,MAXWIDTH);
	scene = new QGraphicsScene();

	space = new Spaceship(100,50);
	enemy = new Enemy(70,40);

	asty = new Asteroid (150,180);
	scroll = new Background(-180,-1000);
	//-1000
	QPixmap pim("IMAG0691.jpg");
	//scene->setBackgroundBrush(pim(MAXWIDTH,MAXHEIGHT,Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
	
	scene->addItem(space);
	scene->addItem(enemy);
	scene->addItem(asty);

	scene->addItem(scroll);
	
	//setZ for the background pic to -1?
	this->setScene(scene);


	connect(timer, SIGNAL(timeout()), this, SLOT(handleTimer()));
	timer->start();
	
	
}

void GraphicsWindow::handleTimer()
{
	counter++;
	if(counter%5==0)
	{
		scroll->moveBy(0,.5);
		scroll->move();
	}
	
	
	
	//Here are all for movements
	if(space->getX() >= MAXWIDTH-59)
		right=false;
	if(space->getX() <= 0)
		left=false;
	if(space->getY() <= 0)
		up=false;
	if(space->getY() >= MAXHEIGHT-76)
		down=false;

	if(right)
	{	
		space->moveBy(1,0);
		space->right();
	}
		
	if(left)
	{
		space->moveBy(-1,0);
		space->left();
	}
	if(up)
	{
		space->moveBy(0,-1);
		space->up();
	}
	if(down)
	{
		space->moveBy(0,1);
		space->down();
	}
	
}

