#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;

	//a값을 먼저 증가시키고 or 연산을 통해
	//앞이 참이기 때문에 뒤를 실행하지 않고 참을 바로 실행
	if (++a || ++b && ++c)
		printf("참 ");

	printf("%d %d %d", a, b, c);
}
