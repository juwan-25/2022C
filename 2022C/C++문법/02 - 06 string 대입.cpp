#include <iostream>
#include <string> //string Ŭ������ ������ ����
#include <stdio.h>
#include <string.h> //strcpy()�� ������ ����
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	printf("%s\n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";
	cout << cppMunja << endl;

	return 0;
}