#include <stdio.h>
#pragma warning(disable:4996)
/*2번문제 : 숫자로 삼각형 출력하기
처음에 scanf를 통해 숫자를 입력받는다
입력받은 숫자만큼의 숫자로 삼각형을 출력한다
예시
3
1
2 4
3 5 6

예시
4
1
2 5
3 6 8
4 7 9 10*/

int main(void)
{
	int n,a = 0;
	int n2 = 1;

	printf("숫자를 입력해 주세요 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		a = i + 1;
		for (int j = 0; j < i + 1; j++)
		{
			printf("%d ", a);
			a = a + (n - (j + 1));
		}
		printf("\n");
	}

	return 0;
}