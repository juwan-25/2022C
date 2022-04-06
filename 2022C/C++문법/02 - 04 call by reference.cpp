#include <iostream>
using namespace std;

//void puls(int* num)
//{
//	*num += 2;
//}

//p.72 **
//참조는 반드시 변수를 가리켜야 함
//상수를 참조X, 주소값 참조X, null과 nullptr로 초기화X
//한 번 참조했던 참조자는 다른 변수 참조X -> 바꿀 수 없음


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