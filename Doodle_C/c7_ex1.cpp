#include <stdio.h>

int main(void)
{
	float a, b;

	scanf("%f %f", &a, &b); // & : ������

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);

	return 0;
}