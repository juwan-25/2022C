#include <iostream>

using namespace std;

int main()
{
	double arr[4] = { 1.1, 2.2, 3.3, 4.4 };

	for (int i = 0; i < sizeof(arr) / sizeof(double); i++)
		cout << arr[i] << " ";

	for (double x : arr)
		cout << x << " ";

	return 0;
}