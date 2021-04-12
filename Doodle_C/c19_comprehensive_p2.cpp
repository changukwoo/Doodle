// 자연수 입력 : 12
// 약수 출력

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d", i);
		}
		else if (n % i == 0)
			printf("%d, ", i);
	}

	printf("\n");

	return 0;
}