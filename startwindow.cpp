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

/** Now this is where the magic begins. Sorry if oyu can see the // comments. I have a ton.
	* Simple stuff. I put them all into a QVBoxLayout. Here you can see some cool stuff,
	* like where I put the buttons to flat and fonts. I also do my QLineEdits to make sure
	* the person has to enter a name
*/

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
	

	nameInput=new QFormLayout();
	name = new QLineEdit;
	//name->setMaxLength(8);
	nameInput->addRow("Enter Name:", name);
	
	layout->addLayout(nameInput);
	this->setLayout(layout);
	
	
	connect(start, SIGNAL(clicked()), this, SLOT(startGame()));
	connect(how, SIGNAL(clicked()), this, SLOT(howTo()));
	connect(exit, SIGNAL(clicked()), this, SLOT(exitNow()));

	
}	

/** I check right before I really start this function to make sure they actually enter a string.
	* you can really enter anything, but itll only process up to a certain amount of chars.
*/

void StartWindow::startGame()
{
	if(name->text().isEmpty() || name->text() == "Must Enter Name Before Game Start" || name->text() == "Up,down,left,right: move. Spacebar: shoot. 'b': bomb(cooldown). 'p': pause")
	{
		name->setText("Must Enter Name Before Game Start"); 
		return;
	}
	
	main->setUsername(name);
	main->gameScreen();
	//Place an if statement. Must have a correct name. If they try to start w/ the error
	//msg, then dont allow it with that exact string. 
	//Create a QString for their name in mainwindow private section. Save it as the 
	//QString if its valid. Then pass it as a text and a score variable later.
}

void StartWindow::howTo()
{

	name->setText("Up,down,left,right: move. Spacebar: shoot. 'b': bomb(cooldown). 'p': pause");
	
}

void StartWindow::exitNow()
{
	qApp->exit(0); 
}


	
