/*************************************************************************
*                                                                        *
* Problem :                                                              *
* �簢�� ��ź�� ���                                                     *
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
	int i, j, k, p;
	int no_cases, no_data;


	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/


		for (p = 0; p < no_data; p++)
			printf("+");
		printf("\n");

		for (j = 0; j < no_data - 2; j++)/*�޴¼����� ������ŭ ����*/
		{
			for (k = 0; k < no_data; k++) {

				if (k == 0 || k == no_data - 1) {
					printf("I");
				}
				if (k != 0 && k != no_data - 1) {

					if ((j % 2 == 0))
					{
						if (k % 2 == 1)
							printf("X");
						else
							printf("-");
					}
					if ((j % 2 == 1)) {
						if (k % 2 == 1)
							printf("-");
						else
							printf("X");
					}
				}

			}
			printf("\n");
		}

		for (p = 0; p < no_data; p++)
			printf("+");
		printf("\n");

		
	}
	return 0;
}