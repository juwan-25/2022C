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
		cout << "�й��� ��ϵǾ����ϴ�."<<endl;
	}
};

int main(void)
{
	Student stu1;
	Student stu2 = Student();

	return 0;
}