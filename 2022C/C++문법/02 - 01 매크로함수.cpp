#include <iostream>
using namespace std;

//#�� ���� �����Ϸ��� �ƴ϶� ��ó���⿡�� ���� �����Ϸ��� ó��
//�ڷ��� ����X
#define jegob(A) ((A)*(A))

int main(void)
{
	cout << jegob(3+1) << endl; // 16
	cout << ((3+1) * (3+1)) << endl; // 16

	return 0;
}