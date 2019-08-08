/*************************************************************************
*                                                                        *
* Problem :                                                              *
*               1���� ������ ����                                        *
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
	int data, data2;
	int arr1[50];
	int arr2[50];

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/
	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d %d", &no_data, &data);/*�޴� ������ ���� �ޱ�*/

		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			fscanf(in_file, "%d ", &data2);
			arr2[j] = data2;
		}
		for (j = 0; j < data; j++) {
			for (k = 0; k < no_data; k++) {
				arr1[k] = arr2[k];
			}
			for (k = 0; k < no_data; k++) {
				if (k == 0) {
					if (((arr1[k + 1] < 3)) && (arr1[k]>0)) { arr2[k] -= 1; }
					else if ((arr1[k + 1]>7) && (arr1[k]>0)) { arr2[k] -= 1; }
					else if (((arr1[k + 1] >= 4) && (arr1[k + 1] <= 7)) && (arr1[k] < 9)) { arr2[k] += 1; }
				}
				else if (k == (no_data-1)) {
					if ((arr1[k - 1] < 3) && (arr1[k]>0)) { arr2[k] -= 1; }
					else if ((arr1[k - 1] > 7) && (arr1[k]>0)) { arr2[k] -= 1; }
					else if (((arr1[k - 1] >= 4) && (arr1[k - 1] <= 7)) && (arr1[k] < 9)) { arr2[k] += 1; }
				}
				else {
					if (((arr1[k - 1]) + (arr1[k + 1]) < 3) && (arr1[k] > 0)) { arr2[k] -= 1; }
					else if (((arr1[k - 1]) + (arr1[k + 1]) > 7) && (arr1[k] > 0)) { arr2[k] -= 1; }
					else if ((((arr1[k + 1]) + (arr1[k - 1]) >= 4) && ((arr1[k + 1]) + (arr1[k - 1]) <= 7)) && (arr1[k] < 9)) { arr2[k] += 1; }
				}
			}
		}
		for (j = 0; j < no_data; j++)
		{
			printf("%d ", arr2[j]);
		}
		printf("\n");
	}
	fclose(in_file);
	return 0;
}