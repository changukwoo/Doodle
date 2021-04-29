#include <stdio.h>

int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");

	for (int i = 0; i < 10; i++)
		printf("%d ", *(arr + i));

	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %d\n", i, &arr[i]);
		printf("arr + %d = %d\n", i, arr + i);
	}

	for (int* ptr = arr; ptr < arr + 10; ptr++)
		printf("%d ", *ptr);

	printf("\n");

	return 0;
}