/*************************************************************************
*                                                       *
* Problem :                                                 *
* ��ĵ���                                             *
*                                                       *
*************************************************************************/
/*************************************************************************
*                                                       *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                   *
* 20153183 ��ȣ��                                          *
*                                                       *
*************************************************************************/

#define _crt_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *in_file;
	int i, j, k;
	int no_cases, no_data;
	int r, c,data;
	int arr[100][100];
	int arr2[100][100];

	in_file = fopen("input.txt", "r");
	if (in_file == NULL) exit(1);

	fscanf(in_file, "%d", &no_cases);
	for (i = 0; i < no_cases; i++)
	{
		int arr[100][100] = { 0, };
		int arr2[100][100] = { 0, };

		fscanf(in_file, "%d %d", &r, &c);
		for (j = 0; j < r; j++)
		{
			for (k = 0; k < c; k++) {
				fscanf(in_file, "%d", &data);
				arr[j][k] = data;
			}
		}
		for (j = 0; j < r; j++)
		{
			for (k = 0; k < c; k++) {
				fscanf(in_file, "%d", &data);
				arr2[j][k] = data;
			}
		}
		for (j = 0; j < r; j++)
		{
			for (k = 0; k < c; k++) {
				printf("%d ", arr[j][k]+arr2[j][k]);
			}
			printf("\n");
		}

		//printf("%d\n", ? ? );
	}
	fclose(in_file);
	return 0;
}