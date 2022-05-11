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
	nHakbun = 1234;
	sName = "Hong";
	cout << "학번이 등록되었습니다." << endl;
}

Student::Student(int Hakbun, string Name)
{
	this->nHakbun = Hakbun;
	this->sName = Name;
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}