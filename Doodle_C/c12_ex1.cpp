#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n % 2)
		printf("nÀº È¦¼ö\n");
	else
		printf("nÀº Â¦¼ö\n");

	return 0;
}