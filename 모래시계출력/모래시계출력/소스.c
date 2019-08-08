/*************************************************************************
*                                                                        *
* Problem :                                                              *
* �𷡽ð� ���                                                          *
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
	int x, y;


	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/

		x = -1; y = -1;
		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			if (y >= no_data / 2) {
				x--; y++;
			}
			else {
				x++; y++;
			}
			for (k = 0; k < no_data; k++) {
				
				if (x > k) {
					printf("-");
				}
				else if (x >= no_data-k) {
					printf("-");
				}
				else {
					if (j % 2 == 0 && k % 2 == 0) {
							printf("*");
						}
					else if(j % 2 == 1 && k % 2 == 1) {
						printf("*");
					}
					else { printf("+"); }
				}

			}
			printf("\n");
		}
	}
	fclose(in_file);
	return 0;
}