// �Է¹��� ���ڵ��� �Ųٷ� ���
// �ִ�, �ּ�
// ¦���� ����

#include <stdio.h>

int main(void)
{
	int n;
	int arr[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];

		if (min > arr[i])
			min = arr[i];
	}

	printf("max : %d, min : %d\n", max, min);

	return 0;
}