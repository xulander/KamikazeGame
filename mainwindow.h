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

/** class for MainWindow. This class calls startwindow to calling the qgraphics for all the 
	* gameplay. */

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



};
#endif
