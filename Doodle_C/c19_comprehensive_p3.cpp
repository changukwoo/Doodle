// ���� �ڸ����� 3, 6, 9�� ��� * ���
// 1 2 * 4 5 * 7 8 * 10 11 12 * 14 15 * ...

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
			printf("* ");
		else
			printf("%d ", i);
	}

	printf("\n");

	return 0;
}