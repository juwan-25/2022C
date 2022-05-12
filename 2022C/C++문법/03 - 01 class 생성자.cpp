#include <iostream>
#include <string> 

using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

public:
	//������ : ��ü�� ������ ��, ȣ��Ǵ� �Լ�
	Student();
	Student(int Hakbun, const char* Name);
	void show();
};

int main(void)
{
	Student stu1 = Student(2219, "Zeus");
	stu1.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
	//��ü ������ ���ÿ� ������� �ʱ�ȭ -> �������(�Ű�����)
	// const/������ ��������� ����� �� ����
{
	int len = strlen(Name)+1;
	sName = new char[len];
	strcpy(sName, Name);
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}


void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}