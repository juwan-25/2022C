#include <iostream>
using namespace std;

//#�� ���� �����Ϸ��� �ƴ϶� ��ó���⿡�� ���� �����Ϸ��� ó��(�ڵ� ġȯ)
//�ڷ��� ����X
//������� ����
//#define jegob(A) ((A)*(A))

//�����Ϸ��� ó��(�ڵ� ġȯ)
//�ڷ��� ����O
//������� ����
//���� �Լ��� ȣ��Ǵ°� �ƴ�
//inline �Լ��� ������ �پ
inline int jegob(int a)
{
	return a * a;
}

int main(void)
{
	cout << jegob(3+1) << endl; // 16
	cout << ((3+1) * (3+1)) << endl; // 16

	return 0;
}