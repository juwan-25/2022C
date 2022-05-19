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

 






