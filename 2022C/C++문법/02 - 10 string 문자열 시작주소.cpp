#include <iostream>
#include <string> //string Ŭ������ ������ ����
#include <stdio.h>

using namespace std;

int main(void)
{
	char ci[10] = "aaa";
	printf("%s\n",ci); // ���ڿ� �����ּ�

	string cppi = "aaa";
	printf("%s \n", cppi.c_str()); // ���ڿ� �����ּ�
	return 0;
}