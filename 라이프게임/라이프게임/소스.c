/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 0�� �ƴ� ������ �ڸ��� ���ϱ�                                          *
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
	int no_cases, no_data, no_data2;
	int data;
	int arr[100][100];
	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d %d", &no_data, &no_data2);/* ��  �� */
		fscanf(in_file, "%d ", &data); /* Ƚ�� �ޱ� */

		for (j = 0; j < no_data; j++) {
			for (k = 0; k < no_data2; k++) {
				arr[j][k] = no_data2;





			}
		}
		



		printf("\n");
	}
	fclose(in_file);
	return 0;
}