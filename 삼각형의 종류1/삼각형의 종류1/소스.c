/*************************************************************************
*                                                                        *
* Problem :                                                              *
*   �ﰢ���� ����(1)                                                     *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                        *
* 20153183 ��ȣ��                                                        *
*                                                                        *
*************************************************************************/

#define _crt_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *in_file;
	int i, j, k;
	int no_cases, no_data;
	int a, b, c;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d %d %d", &a, &b, &c);/*�޴� ������ ���� �ޱ�*/

		if (a + b > c) {
			if (a == b && b==c&&a==c) {
				printf("1");
			}
			else if (c ^ 2 == (b ^ 2) + (a ^ 2)) {
				printf("2");
			}
			else if (b == a && a != c ) {
				printf("3");
			}
			else { printf("4"); }
		}
		else {
			printf("0");
		}
		printf("\n"); 
	}
	fclose(in_file);
	return 0;
}