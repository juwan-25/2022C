#include <iostream>	
#include <string.h>

using namespace std;

class Person
{
public:
	Person(string sName, int nHakbun)
		: name(sName), hakbun(nHakbun) {}
	void PrintShow();
protected:
	string name;
	int hakbun;
};

void Person:: PrintShow()
{
	cout << "�̸� : " << name << endl;
	cout << "�й� : " << hakbun << endl;
}

class Student : public Person
{
public:
	Student(string sName, int nHakbun, string sUniversity)
		: Person(sName, nHakbun), university(sUniversity) {}
	void PrintShow() {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
		cout << "�а� : " << university << endl;
	}
private:
	string university;

};


int main()
{
	Student student = Student("���ֿ�", 2211, "SW");
	student.PrintShow();

	return 0;
}