// �� ������, �� ������

#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	// bool : ������ ����� ���� (1����Ʈ)
	bool p = a > b;
	bool q = a < b;
	bool r = a == b;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);

	return 0;
}