// 입력받은 숫자들을 거꾸로 출력
// 최대, 최소
// 짝수의 개수

#include <stdio.h>

int main(void)
{
	int n;
	int arr[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}