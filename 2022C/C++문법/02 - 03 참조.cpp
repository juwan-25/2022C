#include <iostream>
using namespace std;

int main(void)
{
	int a;

	int& ra = a;
	ra = 30;
	cout << a << endl;

	int* pa = &a;
	*pa = 50;
	cout << a << endl;

	return 0;
}