/*
3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요. (Z제외)
*/

#include <stdio.h>

int main(void)
{
	char a;

	scanf("%c", &a);

	printf("%c\n", a + 1);

	return 0;
}