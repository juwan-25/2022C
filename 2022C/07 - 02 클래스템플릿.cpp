#include <iostream>
#include <string>

using namespace std;

//클래스 템플릿
template <typename T>
class MyData
{
public:
	void setData(T pdata) {
		mydata = pdata;
	}
	T getData() {
		return MyData;
	}
private:
	T mydata;
};

int main()
{
	MyData<int> mydata1;
	MyData<double> mydata2;

	mydata1.setData(5);
	cout << mydata1.getData() << endl;

	mydata1.setData(3);
	cout << mydata1.getData() << endl;

	return 0;
}