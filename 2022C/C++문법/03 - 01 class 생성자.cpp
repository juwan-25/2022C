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
	Student()
	{
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�." << endl;
	}

	void show()
	{
		cout << "�й���" << nHakbun << "�Դϴ�." << endl;
		cout << "�̸���" << sName << "�Դϴ�." << endl << endl;
	}
};

int main(void)
{
	Student stu1;
	stu1.show();

	Student stu2 = Student();
	stu2.show();

	return 0;
}