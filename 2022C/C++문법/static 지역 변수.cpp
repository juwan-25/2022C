#include <iostream>
using namespace std;

void jungjuk(void)
{	
	//지역변수는 함수호출이 끝나면 사라짐
	//정적 지역변수는 선언되는 순간부터 계속 유지
	static int a = 0;
	cout << "정적변수 a는 " << a << endl;
	a++;
}

int main(void)
{
	jungjuk(); //0
	jungjuk(); //1
	jungjuk(); //2
}