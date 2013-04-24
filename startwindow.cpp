#include "startwindow.h"
#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QTimeLine>
#include <QToolBar>
#include <QGraphicsItemAnimation>
#include <QListView>
#include <QLabel>
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
#include <QPalette>
//#include <QPixMap>
#include <QSize>
#include "mainwindow.h"

using namespace std;

//MUST CREAT A MENU BAR..
//QMenuBar *menubar = mewnuBar....

StartWindow::StartWindow(MainWindow* temp)//pass into this mainwindow(this)
{
//

	main = temp;
	start = new QPushButton("Start Game");
	how = new QPushButton("How To Play");
	exit = new QPushButton("Exit Game");

	//this->setFixedSize(500,400);
	start->setMaximumWidth(50);
	QPalette color;
	color.setColor(QPalette::ButtonText, Qt::white);
	
	start->setPalette(color);
	start->setStyleSheet("background-color:black;");
	start->setFlat(true);
	exit->setPalette(color);
	exit->setStyleSheet("background-color:black;");
	exit->setFlat(true);
	how->setPalette(color);
	how->setStyleSheet("background-color:black;");
	how->setFlat(true);
	
	
	QSize buttonSize(270,55);
	start->setFixedSize(buttonSize);
	start->setFont(QFont("Comic Sans Ms", 18, QFont::Bold));
		how->setFixedSize(buttonSize);
	how->setFont(QFont("Comic Sans Ms", 18, QFont::Bold));
		exit->setFixedSize(buttonSize);
	exit->setFont(QFont("Comic Sans Ms", 18, QFont::Bold));

	
	
	QLabel* title = new QLabel;
	QLabel* me = new QLabel;
	title->setText("\nKamikaze");
	QFont font("Comic Sans Ms", 71, QFont::Bold);
	QFont font2("Comic Sans Ms", 15, QFont::Normal);
	
	title->setAlignment(Qt::AlignHCenter);

	
	title->setFont(font);
	title->setFixedSize(MAXWIDTH,MAXHEIGHT);
	
	me->setText("By: Elvis Xu");
	me->setAlignment(Qt::AlignHCenter);
	me->setFont(font2);
	title->setFixedSize(MAXWIDTH,MAXHEIGHT);


	QVBoxLayout* layout = new QVBoxLayout;
	
	layout->addWidget(title);
	layout->addWidget(me);
	layout->addWidget(start,0, Qt::AlignCenter);
	layout->addWidget(how,0,Qt::AlignCenter);
	layout->addWidget(exit,0,Qt::AlignCenter);
	this->setLayout(layout);
	
	
	connect(start, SIGNAL(clicked()), this, SLOT(startGame()));
	//connect(how, SIGNAL(clicked()), this, SLOT(howTo()));
	connect(exit, SIGNAL(clicked()), this, SLOT(exitNow()));

	
}	

void StartWindow::startGame()
{
	main->gameScreen();
}

void StartWindow::exitNow()
{
	qApp->exit(0); 
}


	
