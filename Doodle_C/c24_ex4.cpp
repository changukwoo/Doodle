#include <stdio.h>

int main(void)
{
	int a = 10;

	int* ptr = &a;

	int** ptr_ptr = &ptr;

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);

	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);

	printf("ptr_ptr = %d\n\n", ptr_ptr);

	printf("*ptr = %d\n", *ptr);
	printf("*ptr_ptr = %d\n", *ptr_ptr);
	printf("**ptr_ptr = %d\n", **ptr_ptr);

	return 0;
}