/*
	n = 4;
	1
	1 3
	1 3 5
	1 3 5 7
*/

#include <stdio.h>

int main(void)
{
	int n;
	int odd = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		odd = 1;

		for (int j = 1; j <= i; j++)
		{
			printf("%d ", odd);

			odd += 2;
		}

		printf("\n");
	}

	return 0;
}