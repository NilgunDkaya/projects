#include "Distance.h"
#include <cmath>
#include <iostream>

Distance::Distance(Point a, Point b){
	p1=a;
	p2=b;
}

void Distance::setPoint1(Point a){
	p1=a;
}

void Distance::setPoint2(Point a){
	p2=a;
}

Point Distance::getPoint1(){
	return p1;
}

Point Distance::getPoint2(){
	return p2;
}

void Distance::calculateDistance(){
	int xdiff = (p1.getX()-p2.getX());
	int ydiff = (p1.getY()-p2.getY());
	distance = sqrt(xdiff*xdiff+ydiff*ydiff);
	std::cout << "Distance between ";
	p1.print();
	std::cout<<" end ";
	p2.print(); 
	std::cout <<" = "<< distance << std::endl;
}
