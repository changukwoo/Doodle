#include <stdio.h>

int main(void)
{
	printf("%d + %d = %d\n", 2, 3, 5);

	printf("%f\n", 3.14);
	printf("%.2f\n", 3.141592);

	// %g : �Ǽ� ��� (���� ���·ε� ���)
	printf("%g\n", 3.141592);
	printf("%.3g\n", 12345.6789);

	printf("%c %c %c\n", 'a', 'b', 'c');

	printf("%s\n", "�ȳ��ϼ���");

	return 0;
}