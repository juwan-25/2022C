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
	cout << "�Ϲݻ����� ȣ��." << endl;
	int len = strlen(Name) + 1;		// ������ ���� �ľ�
	sName = new char[len];			// ������ŭ �޸� �Ҵ�
	strcpy(sName, Name);
}


Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
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

int main(void)
{
	// "�Ϲݻ����� ȣ��" ���
	Student stu1 = Student(1111, "JWP");
	Student stu3 = Student(3230, "Renjun");

	stu1.show();
	// (1111, "JWP")�� �����. �Ϲݻ����� ȣ��X

	Student stu2 = Student(stu1);
	
	stu2.show();

	stu1 = stu3;
	stu1.show();

	return 0;
}
