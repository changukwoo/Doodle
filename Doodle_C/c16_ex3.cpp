#include <stdio.h>

int main(void)
{
	// 1~n������ ������ ��

	int n;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		sum += i;

	printf("%d\n", sum);

	return 0;
}