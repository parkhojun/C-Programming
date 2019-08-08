/*************************************************************************
*                                                                        *
* Problem :                                                              *
* ���̾Ƹ�� ���                                                        *
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
	int i, j;
	int no_cases, no_data;
	int x, y, z;
	int count = 1;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/
		no_data /= 2;

		for (j = -no_data; j <= no_data; j++)/*�޴¼����� ������ŭ ����*/
		{

			if (j < 0)
			{
				for (y = 0; y < -j; y++)
					printf("*");
				for (y = 0; y < (no_data + j) * 2 + 1; y++)
					printf("+");
				for (y = 0; y < -j; y++)
					printf("*");

				printf("\n");
			}

			else
			{
				for (y = 0; y < j; y++)
					printf("*");
				for (y = 0; y < (no_data - j) * 2 + 1; y++)
					printf("+");
				for (y = 0; y < j; y++)
					printf("*");

				printf("\n");
			}

		}

	}
	fclose(in_file);
	return 0;
}