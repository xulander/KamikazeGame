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

//#include "thing.h"

#include <QListView>

#include "startwindow.h"
using namespace std;

//MUST CREAT A MENU BAR..
//QMenuBar *menubar = mewnuBar....

MainWindow::MainWindow()
{       

	start = new StartWindow(this);	
	this->setFixedSize(MAXHEIGHT+3,MAXWIDTH+2);
	setCentralWidget(start);

	start->setVisible(true);
        
        p = new QPalette();
        p->setBrush(QPalette::Background, *(new QBrush(*(new QPixmap("space.png")))));
        setPalette(*p);	

        

        //set the qgraphics off for now. Once button is pressed, call another function in this.
        //Then you switch everything over to the game play.
}

void MainWindow::gameScreen()
{
//	delete p;
//	p = new QPalette();
//	setPalette(*p);
	

	start->setVisible(false);

	scene1 = new GraphicsWindow();
	setCentralWidget(scene1);
	
	scene1->setVisible(true);
	scene1->setFocus();

	//QPixmap *pix = new QPixmap;
	//pix->load("space.png");

	//Spaceship *spaceyy = new Spaceship(pix, 100, 50);
	//scene1->addItem(spaceyy);
//view->show();
	//Im guessing create a new palette in QGraphics? I think gamescreen is where i call
	//errthang, amiright?
}



