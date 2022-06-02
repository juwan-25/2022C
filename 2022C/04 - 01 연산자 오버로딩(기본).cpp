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
	Point operator+(const Point& rhs) {
		Point p;
		p.mX = mX + rhs.mX;
		p.mY = mY + rhs.mY;

		return p;
	}
private:
	int mX;
	int mY;
	
};

int main()
{
	Point p1(1, 2);
	Point p2(3, 4);

	Point sum = p1 + p2;
	sum.print();

	return 0;
}

Point::Point(){}

Point::Point(int x, int y)
	: mX(x), mY(y) {}

void Point::print()
{
	cout << "( " << mX << ", " << mY << " )" << endl;
}


