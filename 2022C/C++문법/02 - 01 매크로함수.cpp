#include <iostream>
using namespace std;

//#�� ���� �����Ϸ��� �ƴ϶� ��ó���⿡�� ���� �����Ϸ��� ó��
//�ڷ��� ����X
#define jegob(A) A*A

int main(void)
{
	//������ �켱������ ���� �ǵ����� ���� ����� ����
	cout << jegob(3+1) << endl; // 7
	cout << 3+1 * 3+1 << endl; // 7

	return 0;
}