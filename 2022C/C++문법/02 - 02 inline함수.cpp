#include <iostream>
using namespace std;

//#이 들어가면 컴파일러가 아니라 전처리기에서 프리 컴파일러가 처리(코드 치환)
//자료형 영향X
//디버깅이 불편
//#define jegob(A) ((A)*(A))

//컴파일러가 처리(코드 치환)
//자료형 영향O
//디버깅이 수월
//실제 함수가 호출되는게 아님
//inline 함수는 성능이 뛰어남
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