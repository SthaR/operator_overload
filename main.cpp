/* Program: Operator Overloading implemented via Point Class
Author: Ruby Shrestha
Date: 23rd April 2015*/


#include <iostream>
#include "Point.h"

using namespace std;

int main(){
	
	Point p1(1,2);
	Point p2(4,5);
	Point p3, p4, p5;
		
	p3=p1+p2;
	p3.print();
	
	cout << endl;
	
	p4=p1.operator+(p2);
	p4.print();
	
	cout << endl;
		
	p5=p1+p2+p3+p4;
	p5.print();
}
