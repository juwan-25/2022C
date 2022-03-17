#include <stdio.h>

int sum(int a, int b); //함수의 선언 : 함수를 먼저 선언해야 에러 발생X

int main(void)
{
	int s = sum(1, 2);
	printf("%d", s);
	return 0;
}

int sum(int a, int b)
{
	return a + b;
}