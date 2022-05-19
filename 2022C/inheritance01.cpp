#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


 class Person {
 private :
	 string sName;
 protected :
	 int nAge;
 public:
	 Person();
	 Person(string name, int age);
	 void hi();
 };

 
 Person::Person() {
	 sName = "익명";
	 nAge = 0;
 }

 Person::Person(string name, int age)
	:sName(name), nAge(age) {
	 
 }

 void Person:: hi() {
	 cout << "이름 : " << sName << endl;
	 cout << "나이 : " << nAge << endl;
 }

 class Student :protected Person {
 private:
	 int nGrade;
 public :
	 Student();
	 Student(string name, int age, int grade);
	 void study();

 };

 Student::Student() :Person() {
	 nGrade = 0;
 }

 Student::Student(string name, int age, int grade) : Person(name, age), nGrade(grade) {

 }

 void Student::study() {
	 nAge = 3;
	 hi();

 }

 int main()
 {
	 Person* person = new Person("황인준", 23);
	 person->hi();

	 Student student;
	 student.study();

	 return 0;
 }





