// += -= *= /= %=

#include <stdio.h>

int main(void)
{
	int a = 5;

	a += 6; // a = a + 3
	printf("%d\n", a);

	a *= 7;
	printf("%d\n", a);

	a -= 6;
	printf("%d\n", a);

	a %= 7;
	printf("%d\n", a);

	return 0;
}