#include <iostream>
#include <string> //string 클래스를 가지고 있음
#include <stdio.h>
#include <string.h> //strcpy()를 가지고 있음
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	strcat(cMunja, "++");
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";
	cppMunja += "++";
	cout << cppMunja << endl;

	return 0;
}