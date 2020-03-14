/* The Point class Header (Point.h) */
#ifndef POINT_H
#define POINT_H
 
// Point class declaration
class Point {
private:
   // private data members (variables)
   int x;
   int y;
 
public:
   // Declare member function prototypes
   Point(int x = 0, int y = 0);  // Constructor with default values
   double getMagnitude() const;
   void print() const;
   int getX();
   int getY();
};
 
#endif
