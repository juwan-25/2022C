#include <iostream>
#include <string> 
#include "04 - 01.h"

using namespace std;

Point::Point() {}

Point::Point(int x, int y)
	: mX(x), mY(y) {}

void Point::print()
{
	cout << "( " << mX << ", " << mY << " )" << endl;
}

//연산자 오버로딩
Point Point:: operator+(const Point& rhs) {
	Point p;
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;

	return p;
}

