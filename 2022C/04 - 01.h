#include <iostream>
#include <string> 

using namespace std;

class Point
{
public:
	class Point();
	class Point(int x, int y);

	void print();

	//연산자 오버로딩
	Point operator+(const Point& rhs);

private:
	int mX;
	int mY;

};