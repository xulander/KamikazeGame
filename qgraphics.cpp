
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
#include <QApplication>
#include <iostream>
#include "qgraphics.h"
#include "thing.h"

using namespace std;

GraphicsWindow::GraphicsWindow()//set Scrolling background. Thats it. 
{
	scene = new QGraphicsScene();
	//QPixmap *pix = new QPixmap;
	//pix->load("enemy.png");
	Spaceship *space = new Spaceship(100,50);
	scene->addItem(space);
	
	this->setScene(scene);



	
}
/*
void GraphicsWindow::addItem(Thing* thing)
{
	scene->addItem(thing);
}*/
