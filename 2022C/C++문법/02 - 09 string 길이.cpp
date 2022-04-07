#include <iostream>
#include <string> //string 클래스를 가지고 있음
#include <stdio.h>
#include <string.h> //strcpy()를 가지고 있음
using namespace std;

int main(void)
{
	char ci[10] = "aaa";
	printf("%d\n", strlen(ci));

	string cppi = "aaa";
	cout << cppi.size() << endl; 
	cout << cppi.length() << endl;
	return 0;
}