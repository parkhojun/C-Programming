/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                 ����ī ���͵� ����                                     *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                        *
* 20153183 ��ȣ��                                                        *
*                                                                        *
*************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cnt0 = 0;
int cnt1 = 0;

void fibonacci(int n) {

	if (n == 0) {
		cnt0++;
	}
	else if (n == 1) {
		cnt1++;
	}
	else {
		fibonacci(n - 1);
		fibonacci(n - 2);
	}
}


int main(void) {

	FILE *in_file;
	int i;
	int no_cases, no_data;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/

		cnt0 = cnt1 = 0;
		fibonacci(no_data);
		printf("%d %d\n", cnt0, cnt1);

	}
	fclose(in_file);
	return 0;
}