#include <stdio.h>

int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// printf("arr + 1ÀÇ °ª : %d\n", arr + 1);

	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %d\n", i, &arr[i]);
		printf("arr + %d = %d\n", i, arr + i);
	}

	return 0;
}