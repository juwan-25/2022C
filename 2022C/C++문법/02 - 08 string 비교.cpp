#include <iostream>
#include <string> //string Ŭ������ ������ ����
#include <stdio.h>
#include <string.h> //strcpy()�� ������ ����
using namespace std;

int main(void)
{
	char ci[] = "aaa", cj[] = "aaa", ck[] = "abc";
	printf("%d\n", strcmp(ci, cj) == 0); // ���� ����
	printf("%d\n", strcmp(ci, ck) < 0); // ������ aaa -> abc

	string cppi = "aaa", cppj = "aaa", cppk = "abc";
	cout << (cppi == cppj) << endl; // ���� ����
	cout << (cppi < cppk) << endl; // ������ aaa -> abc
	return 0;
}