// ����ȯ : �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�

#include <stdio.h>

int main(void)
{
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = (double)sum / 3;

	printf("%f\n", avg);

	return 0;
}

// ���� / ���� == ����
// �Ǽ� / ���� == �Ǽ�
// �Ǽ� / �Ǽ� == �Ǽ�

// ���� + ���� == ����
// ���� + �Ǽ� == �Ǽ�
// �Ǽ� + �Ǽ� == �Ǽ�