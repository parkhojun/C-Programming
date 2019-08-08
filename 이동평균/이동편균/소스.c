/*************************************************************************
*                                                                        *
* Problem :                                                              *
* �̵� ���                                                              *
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
	int i, j, k ;
	int no_cases, no_data;
	int data,data2;
	int *a;
	int temp;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/
		
		a = (int *)malloc(sizeof(int)*no_data);

		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			fscanf(in_file, "%d", &data); /*�޴¼��� �ޱ�*/

			a[j]=data;
		}/*�޴¼����� ������ŭ ���� ���κ�*/
		fscanf(in_file, "%d", &data2);
		printf("%d ", no_data - data2 + 1);
		for (j = 0; j < no_data-data2+1; j++) {
			temp = 0;
			for (k = 0; k < data2; k++) {

				temp += a[k+j];
			}
			temp /= data2;
			printf("%d ", temp);
		}

		printf("\n");
	}
	free(a);
	fclose(in_file);
	return 0;
}