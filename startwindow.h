#ifndef STARTWINDOW_H
#define STARTWINDOW_H

//setFocus to absorb keyboard commands. maybe not. 

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QTimeLine>
#include <QLineEdit>
#include <QLabel>
#include <QGraphicsItemAnimation>
#include <QPushButton>
#include <QGraphicsSimpleTextItem>
#include <QListView>
#include <QListWidget>
#include <QFormLayout>


class MainWindow;

#define MAXHEIGHT 600
#define MAXWIDTH 600

using namespace std;

class StartWindow : public QWidget
{
Q_OBJECT

	public:
	StartWindow(MainWindow*);
//	void show();

	public slots:
	void exitNow();
	void startGame();
	void howTo();
//	void quit();
//	void createGame();
//   	void handleTimer();

	
	private://im guessing delete the buttons and stuff after initial screen? how to delete 
	//stuff, then get the mainwindow view to show on top of all others after
	//only thing i currently know how to do is just to have a massive scene already,
	//put the start and quit button at the bottom. and once you press, it disappears
	
	
	//When they press button that connects, it calls a function in main window to set visible

	//MainWindow* mainWindow;
	QPushButton *start;
	QPushButton *exit;
	QPushButton *how;
	MainWindow *main;
	QFormLayout *nameInput;
	QLineEdit *name;
	//QGraphicsSimpleTextItem *title;
	//QLabel *font;
	
};

#endif
