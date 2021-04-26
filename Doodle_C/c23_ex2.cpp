// 문자열 : 문자들이 열거

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100] = "Hello";
	char str2[100];
	char str3[100] = "changukwoo ";
	char str4[] = "a";
	char str5[] = "a";

	int cmp = strcmp(str5, str4);

	printf("%d\n", cmp);

	printf("%d\n", strlen(str1));

	strcpy(str2, str1);

	printf("%s\n", str2);

	strcat(str1, " World!");

	printf("%s\n", str1);

	strcat(str3, str1);

	printf("%s\n", str3);

	return 0;
}