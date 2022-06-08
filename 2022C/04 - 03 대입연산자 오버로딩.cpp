#include <iostream>
#include <string> 

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	//생성자 : 객체가 생성될 때, 호출되는 함수
	Student();
	Student(int Hakbun, const char* Name);

	//복사 생성자
	Student(const Student& rhs);

	//소멸자
	~Student();

	void show();
};

int main(void)
{
	//일반생성자 호출
	Student stu1 = Student(2219, "Zeus");
	Student stu3 = Student(3230, "Renjun");
	stu1.show();

	//복사 생성자 호출
	Student stu2 = stu1;
	stu2.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
	//객체 생성과 동시에 멤버변수 초기화 -> 멤버변수(매개변수)
	// const/참조형 멤버변수를 사용할 수 있음
{
	int len = strlen(Name) + 1;
	sName = new char[len];
	strcpy(sName, Name);
	cout << "생성자 호출" << endl;
	cout << "학번이 등록되었습니다." << endl;

}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "복사 생성자 호출" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "소멸자 호출" << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}