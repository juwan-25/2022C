#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


 class Person {
 private :
	 int nAge;
	 string sName;

 public:
	 Person();
	 Person(string name, int age);
	 void hi();
 };

 
 Person::Person() {
	 sName = "�͸�";
	 nAge = 0;
 }

 Person::Person(string name, int age)
	:sName(name), nAge(age) {
	 
 }

 void Person:: hi() {
	 cout << "�̸� : " << sName << endl;
	 cout << "���� : " << nAge << endl;
 }

 






