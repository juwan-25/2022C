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
	cout << "이름 : " << name << endl;
	cout << "학번 : " << hakbun << endl;
}

class Student : public Person
{
public:
	Student(string sName, int nHakbun, string sUniversity)
		: Person(sName, nHakbun), university(sUniversity) {}
	void PrintShow() {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "학과 : " << university << endl;
	}
private:
	string university;

};


int main()
{
	Student student = Student("이주완", 2211, "SW");
	student.PrintShow();

	return 0;
}