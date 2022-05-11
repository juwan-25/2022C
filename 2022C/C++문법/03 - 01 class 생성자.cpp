#include <iostream>
#include <string> 

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	//생성자 : 객체가 생성될 때, 호출되는 함수
	Student();
	Student(int Hakbun, string Name);
	void show();
};

int main(void)
{
	Student stu1;
	stu1.show();

	Student stu2 = Student(2219,"Zeus");
	stu2.show();

	return 0;
}

Student::Student()
{
	this->nHakbun = 1234;
	this->sName = "Hong";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int Hakbun, string Name)
	: nHakbun(Hakbun), sName(Name)
	//객체 생성과 동시에 멤버변수 초기화 -> 멤버변수(매개변수)
	// const/참조형 멤버변수를 사용할 수 있음
{
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}