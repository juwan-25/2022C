#include <iostream>
#include <string>

using namespace std;

//�Լ� ���ø�
template <typename T> 
T sum(T a, T b)
{
	return a + b;
}

int main()
{
	cout << sum<int>(1, 2) << endl;
	cout << sum<float>(1.f, 2.f) << endl;
	//�ڷ����� �ٿ��־�� �������� ����
	cout << sum<string>("1", "2") << endl;

}