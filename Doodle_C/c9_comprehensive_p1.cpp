/*
1. 두 숫자를 입력받아서 그 숫자들의 합을 출력하는 프로그램을 만들어 보세요.
*/

#include <stdio.h>

int main(void)
{
	float a, b;

	scanf("%f %f", &a, &b);

	printf("%f + %f = %f\n", a, b, a + b);

	return 0;
}