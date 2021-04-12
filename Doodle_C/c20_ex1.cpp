#include <stdio.h>

int main(void)
{
	int arr[5];

	for (int i = 0; i < 5; i++)
		arr[i] = i * 5;

	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);

	return 0;
}