
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
		case Qt::Key_Space:
			
			lazy = new Laser(space->getX()+26, space->getY()-25);
			scene->addItem(lazy);
			bullets.push_back(lazy);
		break;
		case Qt::Key_B:
			if(bomb)
			{
			bomby = new Bomb(space->getX()+9, space->getY()-52);
			scene->addItem(bomby);
			bombay.push_back(bomby);
			bomb=false;
			}
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
	up=down=left=right=detonation=false;
	bomb=true;
	
	bombCounter=0;
	
    	timer = new QTimer(this);
    	timer->setInterval(5);
    	timeBomb = new QTimer(this);
    	timeBomb->setInterval(5);
	
	
	setSceneRect(0,0,MAXHEIGHT,MAXWIDTH);
	scene = new QGraphicsScene();

	space = new Spaceship(300,500);
	//enemy = new Enemy(MAXWIDTH-50,MAXHEIGHT-90);
	//enemy can go as far as (-40,-45) and  (MAXWIDTH-10, MAXHEIGHT-10)
	//baddies.push_back(enemy);
	//+26, -25);
//lazy = new Laser(326,475);
	//asty = new Asteroid (MAXHEIGHT-80,MAXWIDTH-90);
	//Asty can go as far as ( -50 ,-45) and (MAXWIDTH-10, MAXHEIGHT-15);
	
	
	//baddies.push_back(asty);
	scroll = new Background(-180,-1000);
	//-1000
	QPixmap pim("IMAG0691.jpg");
	//scene->setBackgroundBrush(pim(MAXWIDTH,MAXHEIGHT,Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
	
	scene->addItem(space);
	//scene->addItem(enemy);
	//scene->addItem(asty);

	scene->addItem(scroll);
	
	
	
	//setZ for the background pic to -1?
	this->setScene(scene);


	connect(timer, SIGNAL(timeout()), this, SLOT(handleTimer()));
	connect(timeBomb, SIGNAL(timeout()), this, SLOT(bombTimer()));
	timer->start();
	
	
}

void GraphicsWindow::handleTimer()
{
	//Moving the baddies
	if(counter %50)
	for(int i=0; i < baddies.size(); i++)
	{
		baddies[i]->move();	
	
		if(baddies[i]->getX() < -50){
			delete baddies[i];
			baddies.erase(baddies.begin()+i);
			cout << baddies.size() << endl;
			break;
		}
		if(baddies[i]->getX() > MAXWIDTH-10){
			delete baddies[i];
			baddies.erase(baddies.begin()+i);
			cout << baddies.size() << endl;
			break;
		}
		if(baddies[i]->getY() < -45){
			delete baddies[i];
			baddies.erase(baddies.begin()+i);
			cout << baddies.size() << endl;
			break;
		}
		if(baddies[i]->getY() > MAXHEIGHT-15){
			delete baddies[i];
			baddies.erase(baddies.begin()+i);
			cout << baddies.size() << endl;
			break;
		}
	}		

	
	//Asty can go as far as ( -50 ,-45) and (MAXWIDTH-10, MAXHEIGHT-15);
	//Handle the bad guys
   if(counter % 100 == 0)
    {
    	random = rand()%4; //go to 0-3
    	//random =1;
    	cout << "Im a random: "<<random << endl;
    	height = rand() % (MAXHEIGHT-15) - 155;//45
    	width = rand() % (MAXWIDTH -10) - 155;//50
    	switch(random)
    	{
    		case 0://coming from the left
    		cout << "Break1: " << endl;
    		asty = new Asteroid(-50, height);
    		scene->addItem(asty);
    		baddies.push_back(asty);
    		break;
    		case 1:
    		cout << "Break2: " << endl;//coming from the right
    		asty = new Asteroid(MAXWIDTH-10, height);
    		scene->addItem(asty);
    		baddies.push_back(asty);
    		break;
    		case 2://coming from top to right
    		cout << "Break3: " << endl;
    		asty = new Asteroid(width, -45);
    		scene->addItem(asty);
    		baddies.push_back(asty);
    		break;
    		case 3://coming from top to left
    		cout << "Break4: " << endl;
    		asty = new Asteroid(width, -44);
    		scene->addItem(asty);
    		baddies.push_back(asty);
    		
    	}
    	}
    	
    		//enemy = new Enemy(MAXWIDTH-100,MAXHEIGHT-10);
	//enemy can go as far as (-40,-45) and  (MAXWIDTH-10, MAXHEIGHT-10)
    
    if(counter % 700 == 0)
    {
    	//height = rand() % (MAXHEIGHT-15) - 155;//45
    	width = rand() % (MAXWIDTH -10) - 35;//50. The higher the number, more likely it will go ->
    	enemy = new Enemy(width, -45);
    	scene->addItem(enemy);
    	baddies.push_back(enemy);
    }
    	
    	
    	    	
	//handle space collisions
    	if(counter%15)
    	{
    		for(int k=0; k < baddies.size(); k++)
    		{
    			if(space->collidesWithItem(baddies[k]))
    			{
    				space->decrease();
    				delete baddies[k];
    				baddies.erase(baddies.begin()+k);
    				break;
    			}
    		}
    		if(space->getLives() == 0)
    		{
    			timer->stop();
    		}	
    	}
    	


	
	//handle bullets
	if(counter %10)
	for(int i=0; i < bullets.size(); i++)
	{		
		if(bullets[i]->getY() <= 0){
			delete bullets[i];
			bullets.erase(bullets.begin()+i);
			cout << bullets.size() << endl;
			break;
		}
		bullets[i]->move();
		for(int k=0; k < baddies.size(); k++)
		{		
			if(bullets[i]->collidesWithItem(baddies[k]))
			{	
				baddies[k]->decrease();		
				if(baddies[k]->getLives() == 0)
				{
				delete baddies[k];

				
	
				baddies.erase(baddies.begin()+k);
				}
				delete bullets[i];

				bullets.erase(bullets.begin()+i);
				break;
				

			}
		}		


	}
	
	
	//handle background
	counter++;
	if(counter%5==0)
	{
		scroll->moveBy(0,.5);
		scroll->move();
	}
	

	
	
	//Here is the guidelines to make sure spaceship doesn't get out of bounds
	if(space->getX() >= MAXWIDTH-59)
		right=false;
	if(space->getX() <= 0)
		left=false;
	if(space->getY() <= 0)
		up=false;
	if(space->getY() >= MAXHEIGHT-76)
		down=false;
	//Here is to get the ship moving
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
	
	
	//Here is for the bomb and its detonation phase
	if(!bomb&&!detonation)
	{
		if(counter%20)
		{
		for(int i=0; i < bombay.size(); i++)
		{
			bombay[i]->move();
			for(int k=0; k < baddies.size(); k++)
			{		
				if(bombay[i]->collidesWithItem(baddies[k]))
				{			
					timeBomb->start();
					detonation=bombay[i]->detonate();
					delete baddies[k];
				//delete bombay[i];
				//bombay.erase(bombay.begin()+i);
				//so i can make sure not to reiterate loop	
					baddies.erase(baddies.begin()+k);
					break;

				}
			}
			if(detonation)
			{
				cout<<"Did we break here?" <<endl;
				break;
			}	
		if(bombay[i]->getY() <= 0){
			delete bombay[i];
			bombay.erase(bombay.begin()+i);
			cout << bombay.size() << endl;
		}

		}		

		}
		if(counter%3000==0)
		{
			bomb=true; //Also output that bomb is Ready!!!!!!!
			cout << "Bomb ready" << endl;
		}
	}
}


void GraphicsWindow::bombTimer()
{
	bombCounter++;
	
	if(bombCounter%10==0)
	{
	for(int k=0; k < baddies.size(); k++)
	{		
		if(bombay[0]->collidesWithItem(baddies[k]))
		{			
			delete baddies[k];
			baddies.erase(baddies.begin()+k);
			break;

		}
	}
	}
	if(bombCounter % 400==0)//originally 350
		{
			delete bombay[0];
			bombay.erase(bombay.begin() +0);
			detonation = false;	
			cout << "Am i getting here" << endl;
			timeBomb->stop();
		}	

}		

