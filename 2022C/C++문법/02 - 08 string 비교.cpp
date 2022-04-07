#include <iostream>
#include <string> //string 클래스를 가지고 있음
#include <stdio.h>
#include <string.h> //strcpy()를 가지고 있음
using namespace std;

int main(void)
{
	char ci[] = "aaa", cj[] = "aaa", ck[] = "abc";
	printf("%d\n", strcmp(ci, cj) == 0); // 같은 글자
	printf("%d\n", strcmp(ci, ck) < 0); // 사전순 aaa -> abc

	string cppi = "aaa", cppj = "aaa", cppk = "abc";
	cout << (cppi == cppj) << endl; // 같은 글자
	cout << (cppi < cppk) << endl; // 사전순 aaa -> abc
	return 0;
}