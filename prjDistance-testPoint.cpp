/* A test driver for the Point class (TestPoint.cpp) */
#include <iostream>
#include <iomanip>
#include "Distance.h"   // using Point class
using namespace std;
 
int main() {
   // Construct an instance of Point p1
   Point p1(3, 4);
   p1.print();
  
   cout << fixed << setprecision(2);
   cout << " magnitude = " << p1.getMagnitude() << endl;

   // Construct an instance of Point using default constructor
   Point p2(6);
   //p2.print();
   
   Point p3(5,12);
   
   Distance d(p1,p2);
   d.calculateDistance();
 
   
}
