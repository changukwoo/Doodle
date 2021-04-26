// ∆ƒΩ∫ƒÆ¿« ªÔ∞¢«¸

/*
1
1 1
1 2 1
1 3 3 1

j=0 || j=i => 1
i«‡ jø≠ = [i-1 j-1] + [i-1 j]
*/

#include <stdio.h>

int main(void)
{
	int p[10][10];
	int nine = 9;

	for (int i = 0; i < 10; i++)
	{
		for (int i = 1; i <= nine; i++)
			printf(" ");

		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				p[i][j] = 1;
			else
				p[i][j] = p[i - 1][j - 1] + p[i - 1][j];

			printf("%d ", p[i][j]);
		}

		nine--;
		printf("\n");
	}

	return 0;
}