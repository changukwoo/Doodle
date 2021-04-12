#include <stdio.h>

int main(void)
{
	// 1~n까지의 숫자의 합

	int n;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		sum += i;

	printf("%d\n", sum);

	return 0;
}