#include <iostream>
#include <string> //string Ŭ������ ������ ����
#include <stdio.h>
#include <string.h> //strcpy()�� ������ ����
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