#include <stdio.h>

int main(void)
{
	int x = 1;

	//break가 없어서 12d 출력
	switch (x)
	{
	case 0 :
		printf("0");
	case 1:
		printf("1");
	case 2:
		printf("2");
		break;
	default:
		printf("d");
	}
}