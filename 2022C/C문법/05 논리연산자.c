#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;

	//a���� ���� ������Ű�� or ������ ����
	//���� ���̱� ������ �ڸ� �������� �ʰ� ���� �ٷ� ����
	if (++a || ++b && ++c)
		printf("�� ");

	printf("%d %d %d", a, b, c);
}
