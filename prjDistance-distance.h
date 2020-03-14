#include "Point.h"


class Distance{
	private:
		Point p1;
		Point p2;
		double distance;
	public:
		Distance(Point, Point);
		void setPoint1(Point);
		Point getPoint1();
		void setPoint2(Point);
		Point getPoint2();
		void calculateDistance();
};
