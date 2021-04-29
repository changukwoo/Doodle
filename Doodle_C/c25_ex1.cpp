#include <stdio.h>

int main(void)
{
	int a = 10;

	int* ptr_a = &a;

	printf("ptr_a의 값 : %d\n", ptr_a);
	printf("ptr_a + 1의 값 : %d\n", ptr_a + 1);

	return 0;
}