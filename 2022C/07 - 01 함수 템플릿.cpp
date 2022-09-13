#include <iostream>
#include <string>

using namespace std;

//함수 템플릿
template <typename T> 
T sum(T a, T b)
{
	return a + b;
}

int main()
{
	cout << sum<int>(1, 2) << endl;
	cout << sum<float>(1.f, 2.f) << endl;
	//자료형을 붙여주어야 에러나지 않음
	cout << sum<string>("1", "2") << endl;

}