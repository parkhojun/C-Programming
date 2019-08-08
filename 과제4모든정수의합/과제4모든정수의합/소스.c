#include <stdio.h>
#include <stdlib.h>

int Combine(int m, int n) {
	int i;
	int sum = 0;
	for (i = m; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}

int main(void) {
	FILE *in_file;
	int i, j;
	int no_cases, no_data;
	int x, y;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d %d", &x,&y);
		Combine(x, y);
	}
	
	return 0;
}