#include <iostream>
using namespace std;

//����Ʈ ��, ���� ���� �Ѱ� ���� �ʾ��� �� �ڵ����� �⺻�� ����
int jegob(int a, int b=1)
{
	return a * a + b;
}

//� �Լ��� �����ؾ� ���� ��ȣ�ؼ� ���� �߻�
//int jegob(int a)
//{
//	return a * a;
//}

double jegob(double a, double b=1.1)
{
	return a * a + b;
}

int main(void)
{
	//�Լ� �����ε� : �̸��� ������ �Ű������� �ٸ�
	cout << jegob(4) << endl; //17
	cout << jegob(3.3) << endl; //11.99

	return 0;
}