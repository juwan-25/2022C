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
	this->nHakbun = 1234;
	this->sName = "Hong";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

Student::Student(int Hakbun, string Name)
	: nHakbun(Hakbun), sName(Name)
	//��ü ������ ���ÿ� ������� �ʱ�ȭ -> �������(�Ű�����)
	// const/������ ��������� ����� �� ����
{
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}