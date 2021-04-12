// break : 반복문 한 개를 빠져나옴
// continue;
// 중첩 for문

// 숫자 입력 -> 숫자 출력
// 1번째 : 7
// 2번째 : 5
// ...
// 15번째 : 0

#include <stdio.h>

int main(void)
{
	int n;

	for (int i = 1; ; i++)
	{
		scanf("%d", &n);

		if (n == 0)
			break;

		printf("%d번째 = %d\n", i, n);
	}

	return 0;
}