#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n > 0)
		printf("n�� ���\n");
	else if (n == 0)
		printf("n�� 0\n");
	else
		printf("n�� ����\n");

	return 0;
}