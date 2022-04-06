#include <iostream>
using namespace std;

void puls(int* num)
{
	*num += 2;
}

int main(void)
{
	int a = 3;
	puls(&a);
	cout << a << endl;

	return 0;
}