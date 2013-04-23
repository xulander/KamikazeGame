#include "mainwindow.h"
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
#include <QPixmap>

#include <QListView>
#include "startwindow.h"
using namespace std;

//MUST CREAT A MENU BAR..
//QMenuBar *menubar = mewnuBar....

MainWindow::MainWindow()
{
	start = new StartWindow(this);	
	this->setFixedSize(MAXHEIGHT,MAXWIDTH);
	setCentralWidget(start);
	//setCentralWdiget(QGraphics);
	start->setVisible(true);
        
        p = new QPalette();
        p->setBrush(QPalette::Background, *(new QBrush(*(new QPixmap("space.png")))));
        setPalette(*p);
        //set the qgraphics off for now. Once button is pressed, call another function in this.
        //Then you switch everything over to the game play.
}

void MainWindow::gameScreen()
{
	start->setVisible(false);
	delete p;
	p = new QPalette();
	setPalette(*p);
}



