#include <stdio.h>

int main(void)
{
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	int a; char b; float c; double d;

	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

	return 0;
}

// sizeof(x) : x�� ũ�⸦ �˷���
// x : �� (int, float, ...)
//     ���� �̸�