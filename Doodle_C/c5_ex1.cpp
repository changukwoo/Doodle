#include <stdio.h>

int main(void)
{
	/*
	// int : 32��Ʈ(4����Ʈ), ������ ��� �� ����
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
	// float : 32��Ʈ(4����Ʈ), �Ǽ��� ��� �� ����
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

	// double : 64��Ʈ(8����Ʈ), �Ǽ��� ��� �� ����
	// ���� ������ 2�谡 �Ǹ�, ǥ�� ������ ������ ������ ������ �˴ϴ�.
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

	// �ε��Ҽ���(floating point)

	// ����Ʈ : ��ǻ�Ϳ��� �����͸� ó���ϴ� ���� ���� ����

	/*
	������
		char(1byte) - ���ڸ� ��� �� ����
		short(2byte)
		long(4byte)
		int(4byte) - �ý��ۿ� ���� �ڵ�����, ��ü�� long
		int�� ���� : -2147483648 ~ +2147483647(-2^31 ~ +2^31-1 = 2^32��)
		long long(8byte)

	�Ǽ���
		float(4byte)
		double(8byte)

	unsigned, signed
		unsigned int a; // ��ȣ�� ����, ���� ���� X
		unsigned int�� ���� : 0 ~ 2^32-1��

	void : ���ϰ��� ���� �Լ��� �ڷ���

	bool : ��/������ �����ϴ� �ڷ���(= char)
	*/

	return 0;
}