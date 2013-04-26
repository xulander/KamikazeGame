#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//setFocus to absorb keyboard commands. maybe not. 
#include "startwindow.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QTimeLine>
#include <QLineEdit>
#include <QGraphicsItemAnimation>
#include <QPushButton>
#include <QGraphicsSimpleTextItem>
#include <QListView>
#include <QListWidget>
#include <QPalette>
#include "qgraphics.h"
class GraphicsWindow;

using namespace std;

class MainWindow : public QMainWindow
{
Q_OBJECT

	public:
	MainWindow();
	void gameScreen();
	void setUsername(QLineEdit*);	
//	void show();

//	public slots:
//	void quit();
//	void createGame();
//   	void handleTimer();

	
	
	private://im guessing delete the buttons and stuff after initial screen? how to delete 
	//stuff, then get the mainwindow view to show on top of all others after
	//only thing i currently know how to do is just to have a massive scene already,
	//put the start and quit button at the bottom. and once you press, it disappears
	StartWindow *start;
	QPalette* p;
	GraphicsWindow *scene1;
	QString username;

//QGraphicsScene *scene;
/*
	MainWindow* mainWindow;
	QPushButton *start;
	QPushButton *exit;
	QPushButton *how;
	QGraphicsSimpleTextItem *title;
	QGraphicsScene *font;

	int timeCounter;
	


//	QLineEdit *boardSize;

 //  	QLineEdit *startingMoves;
 //  	QLineEdit *randSeed ;
   	
	QTimer* timer;
   	
   	QLineEdit *errorMessage;
   	
   	
   	QGraphicsScene *scene;
	QGraphicsView *view;
	
	
	bool north,south,west,east; //how would you set it up so it keeps going however long hold
//	int nextMove, i;
//	int gauge2;
	
	
*/

};
#endif
