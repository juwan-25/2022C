#include <iostream>
#include <string> 

using namespace std;

class Point
{
public:
	class Point();
	class Point(int x, int y);

	void print();

	//������ �����ε�
	Point operator+(const Point& rhs);

private:
	int mX;
	int mY;

};