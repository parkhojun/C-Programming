/*************************************************************************
*                                                                        *
* Problem :                                                              *
* ���ڻﰢ�� ���                                                        *
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
	int temp;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/


	for (i = 1; i <= no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/


		for (j = 1; j <= no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			temp = j;
			for (k =1; k <= j; k++) {
				printf("%d ", temp);
				temp += no_data-k;
			}
			printf("\n");
		}
	}
	fclose(in_file);
	return 0;
}