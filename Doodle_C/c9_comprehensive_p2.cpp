/*
2. 체중과 키를 입력받아서 체질량 지수를 구하는 프로그램을 만들어 보세요.
*/

#include <stdio.h>

int main(void)
{
	float w, t; // 체중, 키

	printf("체중(kg)과 키(m) 입력 : ");
	scanf("%f %f", &w, &t);

	printf("BMI : %f\n", w / (t * t));

	return 0;
}