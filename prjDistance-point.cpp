/* The Point class Implementation (Point.cpp) */
#include "Point.h" // user-defined header in the same directory
#include <iostream>
#include <cmath>
using namespace std;
 
// Constructor (default values can only be specified in the declaration)
Point::Point(int a, int b) {
	x=a;
	y=b; 
}  
 
double Point::getMagnitude() const {
   return sqrt(x*x + y*y);    // sqrt in <cmath>
}
 
// Public member function to print description about this point
void Point::print() const {
   cout << "(" << x << "," << y << ")";
}

int Point::getX(){
	return x;
}

int Point::getY(){
	return y;
}
