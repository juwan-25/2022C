#include <iostream>	// cout, endl ���
#include <string.h>	// strcpy() ���

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	// ������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� �������� �ʴ´�
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

// ��������� �ʱ�ȭ �� �� ������ ����,
// const�� ������ ������ ������ ��������� �� �� �ִ�.
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)	// �������(�Ű�����)
{
	cout << "Student �Ϲݻ����� ȣ��." << endl;
	int len = strlen(Name) + 1;		// ������ ���� �ľ�
	sName = new char[len];			// ������ŭ �޸� �Ҵ�
	strcpy(sName, Name);
}


Student::~Student()
{
	delete[]sName;
	cout << "Student �Ҹ��� ȣ��" << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl << endl;
}

// ���������
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun)
{
	cout << "Student ���� ������ ȣ��" << endl;
	sName = new char[strlen(rhs.sName) + 1];
	strcpy_s(sName, strlen(rhs.sName) + 1, rhs.sName);
}


//������ �����ε�
Student& Student::operator=(const Student& rhs) {
	cout << "���� ������ ȣ��" << endl;

	//������ �����ϴ� ���� ����, ������ �Ҵ� �غ�
	delete[]sName;

	nHakbun = rhs.nHakbun;
	int len = strlen(rhs.sName) + 1;		// ������ ���� �ľ�
	sName = new char[len];			// ������ŭ �޸� �Ҵ�
	strcpy(sName, rhs.sName);

	return *this;

}

class HighSchoolStudent : public Student
{
public:
	//������
	HighSchoolStudent(int Hakbun, const char* Name, string depart)
		: Student(Hakbun, Name), sDepart(depart) 
	{
		cout << "HighSchoolStudent ������ ȣ��" << endl;
	}
	
	//�Ҹ���
	~HighSchoolStudent() 
	{
		cout << "HighSchoolStudent �Ҹ��� ȣ��" << endl;
	}
private:
	string sDepart;

};



int main(void)
{
	HighSchoolStudent hss = HighSchoolStudent(3230, "Ȳ����", "SW");
	hss.show();	//�θ�Ŭ������ ��� �Լ� ȣ��_�ڽĿ� ����X

	return 0;
}
