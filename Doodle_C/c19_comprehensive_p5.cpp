/*
	n=4

	1
	1 2 3
	1 2 3 4 5
	1 2 3 4 5 6 7
*/
#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i * 2 - 1; j++)
			printf("%d ", j);

		printf("\n");
	}

	return 0;
}