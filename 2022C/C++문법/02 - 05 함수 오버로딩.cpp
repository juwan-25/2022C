#include <iostream>
using namespace std;


int jegob(int a, int b)
{
	return a * a + b;
}
double jegob(double a, double b)
{
	return a * a + b;
}

int main(void)
{
	//함수 오버로딩 : 이름은 같으나 매개변수가 다름
	cout << jegob(4,1) << endl; //17
	cout << jegob(3.3, 1.1) << endl; //11.99

	return 0;
}