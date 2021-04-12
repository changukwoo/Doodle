// 연산자 : + - / * % += -= ++ -- && || !
// 조건문 : if() switch()
// 반복문 : while() for()

// 1. 시험 점수 입력
// 90 ~ 100 A
// 80 ~ 89 B
// 70 ~ 79 C
// 60 ~ 69 D
// 59 ~ 0 E

#include <stdio.h>

int main(void)
{
	int n;

	printf("시험 점수 입력 : ");

	scanf("%d", &n);

	if (n >= 90 && n <= 100)
		printf("A\n");
	else if (n >= 80 && n <= 89)
		printf("B\n");
	else if (n >= 70 && n <= 79)
		printf("C\n");
	else if (n >= 60 && n <= 69)
		printf("D\n");
	else if (n >= 0 && n <= 59)
		printf("E\n");
	else
		printf("잘못 입력하셨습니다.\n");

	return 0;
}