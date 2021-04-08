#include <stdio.h>

int main(void)
{
	int a;

	printf("숫자 입력 : ");

	scanf("%d", &a);

	printf("%d의 ASCII 문자 : %c\n", a, a);

	return 0;
}