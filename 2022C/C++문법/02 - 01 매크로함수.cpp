#include <iostream>
using namespace std;

//#이 들어가면 컴파일러가 아니라 전처리기에서 프리 컴파일러가 처리
//자료형 영향X
#define jegob(A) A*A

int main(void)
{
	//연산자 우선순위로 인해 의도하지 않은 결과가 나옴
	cout << jegob(3+1) << endl; // 7
	cout << 3+1 * 3+1 << endl; // 7

	return 0;
}