#include <stdio.h>

int main(void)
{
	int a = 10;

	int* ptr;

	ptr = &a;

	printf("a�� �� : %d\n", a);

	*ptr = 20;

	printf("a�� �� : %d\n", a);

	return 0;
}