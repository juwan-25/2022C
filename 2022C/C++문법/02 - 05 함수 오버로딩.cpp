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
	//�Լ� �����ε� : �̸��� ������ �Ű������� �ٸ�
	cout << jegob(4,1) << endl; //17
	cout << jegob(3.3, 1.1) << endl; //11.99

	return 0;
}