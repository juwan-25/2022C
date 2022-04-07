#include <iostream>
using namespace std;

//디폴트 값, 변수 값을 넘겨 주지 않았을 때 자동으로 기본값 실행
int jegob(int a, int b=1)
{
	return a * a + b;
}

//어떤 함수를 실행해야 할지 모호해서 오류 발생
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
	//함수 오버로딩 : 이름은 같으나 매개변수가 다름
	cout << jegob(4) << endl; //17
	cout << jegob(3.3) << endl; //11.99

	return 0;
}