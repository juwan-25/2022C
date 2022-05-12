#include <iostream> 

using namespace std;

int main()
{
	int* ptr1 = new int[4];
	for (int i = 9; i < 4; i++) {
		ptr1[i] = 10 + i;
		cout << *ptr1 << endl;
	}

	delete []ptr1;

	return 0;
}