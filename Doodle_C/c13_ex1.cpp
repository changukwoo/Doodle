// ��ø if��
// �߰�ȣ �ڵ� ��Ÿ��

#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b) // a > b
	{
		// a > b > c
		// a > c > b
		// c > a > b
		if (a > c)
			printf("%d\n", a);
		else
			printf("%d\n", c);
	}
	else if (b > c)
		printf("%d\n", b);
	else
		printf("%d\n", c);

	return 0;
}