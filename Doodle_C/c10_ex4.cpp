// ��ġ�� ��ġ

#include <stdio.h>

int main(void)
{
	int a = 10;
	int b;

	printf("��ġ ���� ����\n");
	b = ++a;
	printf("a : %d\n", a);
	printf("b : %d\n", b);

	printf("��ġ ���� ����\n");
	b = a++;
	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}