#include <stdio.h>

int main(void)
{
	/*
	// int : 32비트(4바이트), 정수를 담는 데 쓰임
	int a = 5;
	int b = 3;

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namuji = a % b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d %% %d = %d\n", a, b, namuji);
	*/

	/*
	// float : 32비트(4바이트), 실수를 담는 데 쓰임
	float a = 9.8;
	float b = 3.14;

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
	*/

	// double : 64비트(8바이트), 실수를 담는 데 쓰임
	// 저장 공간이 2배가 되면, 표현 가능한 숫자의 개수는 제곱이 됩니다.
	double a = 9.8;
	double b = 3.14;

	double hap = a + b;
	double cha = a - b;
	double gop = a * b;
	double mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

	// 부동소수점(floating point)

	// 바이트 : 컴퓨터에서 데이터를 처리하는 가장 작은 단위

	/*
	정수형
		char(1byte) - 문자를 담는 데 쓰임
		short(2byte)
		long(4byte)
		int(4byte) - 시스템에 따라서 자동결정, 대체로 long
		int의 범위 : -2147483648 ~ +2147483647(-2^31 ~ +2^31-1 = 2^32개)
		long long(8byte)

	실수형
		float(4byte)
		double(8byte)

	unsigned, signed
		unsigned int a; // 부호를 무시, 음수 저장 X
		unsigned int의 범위 : 0 ~ 2^32-1개

	void : 리턴값이 없는 함수의 자료형

	bool : 참/거짓을 저장하는 자료형(= char)
	*/

	return 0;
}