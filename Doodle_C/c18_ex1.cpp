// break : �ݺ��� �� ���� ��������
// continue;
// ��ø for��

// ���� �Է� -> ���� ���
// 1��° : 7
// 2��° : 5
// ...
// 15��° : 0

#include <stdio.h>

int main(void)
{
	int n;

	for (int i = 1; ; i++)
	{
		scanf("%d", &n);

		if (n == 0)
			break;

		printf("%d��° = %d\n", i, n);
	}

	return 0;
}