#include <iostream>
using namespace std;

//void puls(int* num)
//{
//	*num += 2;
//}

//p.72 **
//������ �ݵ�� ������ �����Ѿ� ��
//����� ����X, �ּҰ� ����X, null�� nullptr�� �ʱ�ȭX
//�� �� �����ߴ� �����ڴ� �ٸ� ���� ����X -> �ٲ� �� ����


void puls(int& num)
{
	num += 2;
}

int main(void)
{
	int a = 3;
	puls(a);
	cout << a << endl;

	return 0;
}