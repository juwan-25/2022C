#include <iostream>	// cout, endl 사용
#include <string.h>	// strcpy() 사용

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// 생성자 : 객체가 생성되면 자동으로 호출되는 함수
	// 반환형을 갖고있지 않는다
	Student();
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);
	~Student();
	Student& operator=(const Student& rhs);
	void show();

};

Student::Student()
{
}

// 멤버변수를 초기화 할 수 있으며 따라서,
// const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)	// 멤버변수(매개변수)
{
	cout << "Student 일반생성자 호출." << endl;
	int len = strlen(Name) + 1;		// 공간의 갯수 파악
	sName = new char[len];			// 갯수만큼 메모리 할당
	strcpy(sName, Name);
}


Student::~Student()
{
	delete[]sName;
	cout << "Student 소멸자 호출" << endl;
}

void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl << endl;
}

// 복사생성자
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun)
{
	cout << "Student 복사 생성자 호출" << endl;
	sName = new char[strlen(rhs.sName) + 1];
	strcpy_s(sName, strlen(rhs.sName) + 1, rhs.sName);
}


//연산자 오버로딩
Student& Student::operator=(const Student& rhs) {
	cout << "대입 연산자 호출" << endl;

	//기존에 존재하는 공간 제거, 새공간 할당 준비
	delete[]sName;

	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;		// 공간의 갯수 파악
	sName = new char[len];			// 갯수만큼 메모리 할당
	strcpy(sName, rhs.sName);

	return *this;

}

class HighSchoolStudent : public Student
{
public:
	//생성자
	HighSchoolStudent(int Hakbun, const char* Name, string depart)
		: Student(Hakbun, Name), sDepart(depart) 
	{
		cout << "HighSchoolStudent 생성자 호출" << endl;
	}
	
	//소멸자
	~HighSchoolStudent() 
	{
		cout << "HighSchoolStudent 소멸자 호출" << endl;
	}
private:
	string sDepart;

};



int main(void)
{
	HighSchoolStudent hss = HighSchoolStudent(3230, "황인준", "SW");
	hss.show();	//부모클래스의 멤버 함수 호출_자식에 구현X

	return 0;
}
