#include <stdio.h>
#pragma warning(disable:4996)
/*2������ : ���ڷ� �ﰢ�� ����ϱ�
ó���� scanf�� ���� ���ڸ� �Է¹޴´�
�Է¹��� ���ڸ�ŭ�� ���ڷ� �ﰢ���� ����Ѵ�
����
3
1
2 4
3 5 6

����
4
1
2 5
3 6 8
4 7 9 10*/

int main(void)
{
	int n,a = 0;
	int n2 = 1;

	printf("���ڸ� �Է��� �ּ��� : ");
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