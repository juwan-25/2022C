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

	//���� ������
	Student(const Student& rhs);

	//�Ҹ���
	~Student();

	void show();
};

int main(void)
{
	//�Ϲݻ����� ȣ��
	Student stu1 = Student(2219, "Zeus");
	Student stu3 = Student(3230, "Renjun");
	stu1.show();

	//���� ������ ȣ��
	Student stu2 = stu1;
	stu2.show();

	return 0;
}

Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)
	//��ü ������ ���ÿ� ������� �ʱ�ȭ -> �������(�Ű�����)
	// const/������ ��������� ����� �� ����
{
	int len = strlen(Name) + 1;
	sName = new char[len];
	strcpy(sName, Name);
	cout << "������ ȣ��" << endl;
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "���� ������ ȣ��" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}