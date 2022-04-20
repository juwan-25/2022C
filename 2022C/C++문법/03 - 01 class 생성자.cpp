#include <iostream>
#include <string> 

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

	//생성자 : 객체가 생성될 때, 호출되는 함수
	//default 생성자
};

int main(void)
{
	Student stu1;
	Student stu2 = Student();

	return 0;
}