#include <stdio.h>

int main(void)
{
	// 1, 2, 4, 8, 16, 32, ...

	int n;

	scanf("%d", &n);

	for (int i = 0; (1 << i) <= n; i++)
		printf("%d ", 1 << i);

	return 0;
}