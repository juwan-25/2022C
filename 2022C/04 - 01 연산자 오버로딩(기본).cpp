#include <iostream>
#include <string> 

using namespace std;

class Point
{
private:
	int mX;
	int mY;
	
public:
	class Point(int x, int y);
	void print();
};

Point::Point(int x, int y)
	: mX(x), mY(y) {}

void Point::print()
{
	cout << "( " << mX << ", " << mY << " )" << endl;
}

int main()
{
	Point p1(1, 2);

	p1.print();

	return 0;
}
