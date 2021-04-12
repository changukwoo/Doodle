// 2^0 = 1
// 2^1 = 2
// 2^2 = 4
// ...
// 2^n

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	/*
	while (i <= n)
	{
		printf("2^%d=%d\n", i, t);

		i++;
		t *= 2;
	}
	*/

	for (int i = 0, t = 1; i <= n; i++, t *= 2)
		printf("2^%d=%d\n", i, t);

	return 0;
}