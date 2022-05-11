#include <iostream>
#include <string> 

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

public:
	//������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
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
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int Hakbun, string Name)
{
	this->nHakbun = Hakbun;
	this->sName = Name;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}