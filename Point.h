/* Program: Point interface
Author: Ruby Shrestha
Date: 23rd April 2015*/

#include <iostream>

#ifndef POINT_H
#define POINT_H

class Point{
	
	private:
		int x;
		int y;
		
	public:
		
		Point(int, int);
		Point();		
		int getX();		
		void setX(int );		
		int getY();		
		void setY(int );
		void setXY(int , int );
		void print();	
		Point operator+(Point) const;
		
};

#endif
