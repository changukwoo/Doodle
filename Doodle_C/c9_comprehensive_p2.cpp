/*
2. ü�߰� Ű�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ����� ������.
*/

#include <stdio.h>

int main(void)
{
	float w, t; // ü��, Ű

	printf("ü��(kg)�� Ű(m) �Է� : ");
	scanf("%f %f", &w, &t);

	printf("BMI : %f\n", w / (t * t));

	return 0;
}