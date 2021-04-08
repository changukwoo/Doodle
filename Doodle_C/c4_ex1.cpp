// 주기억장치(RAM)에 변수 저장

#include <stdio.h>

int main(void)
{
	int a; // 선언, 4바이트(32비트)

	a = 3; // 대입
	printf("%d\n", a);

	a = 5; // 대입
	printf("%d\n", a);

	return 0;
}