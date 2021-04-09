#include <stdio.h>

int main(void)
{
	int i = 1;

repeat:
	printf("%d\n", i);
	if (i < 10)
	{
		i++;
		goto repeat;
	}

	return 0;
}