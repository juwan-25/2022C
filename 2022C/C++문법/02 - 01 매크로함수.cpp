#include <iostream>
using namespace std;

//#이 들어가면 컴파일러가 아니라 전처리기에서 프리 컴파일러가 처리
//자료형 영향X
#define jegob(A) ((A)*(A))

int main(void)
{
	cout << jegob(3+1) << endl; // 16
	cout << ((3+1) * (3+1)) << endl; // 16

	return 0;
}