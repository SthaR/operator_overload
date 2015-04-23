/* Program: Point implementation
Author: Ruby Shrestha
Date: 23rd April 2015*/


#include <iostream>
#include "Point.h"

using namespace std;
		
Point::Point(int x, int y){
			setXY(x,y);
		}
		
		
Point::Point(){
			setXY(0,0);
		}
		
int Point::getX(){
			return x;
		}
		
void Point::setX(int x){
			this->x=x;
		}
		
int Point::getY(){
			return y;
		}
		
void Point::setY(int y){
			this->y=y;
		}
		
void Point::setXY(int x, int y){
	setX(x);
	setY(y);
}
		
void Point::print(){
	cout << "(" << getX() << " , " << getY() << ")"; 
}

Point Point::operator+(Point p) const{
	Point pt(x+p.getX(), y+p.getY());
	return pt;
}
		
		

