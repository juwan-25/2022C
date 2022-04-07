#include <iostream>
#include <string> //string 클래스를 가지고 있음
#include <stdio.h>

using namespace std;

int main(void)
{
	char ci[10] = "aaa";
	printf("%s\n",ci); // 문자열 시작주소

	string cppi = "aaa";
	printf("%s \n", cppi.c_str()); // 문자열 시작주소
	return 0;
}