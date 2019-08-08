/*************************************************************************
*                                                                        *
* Problem :                                                              *
*  ��������                                                              *
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
	int i, j, k, l;
	int no_cases, no_data;
	int data;
	int temp;
	int *bubble;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/

		bubble = (int*)malloc(sizeof(int)* no_data);

		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			fscanf(in_file, "%d", &data); /*�޴¼��� �ޱ�*/

			bubble[j] = data;
		}
		for (k = 0; k < no_data-1; k++) {
			for (l = 0; l < no_data -1-k; l++) {
				if (bubble[l] > bubble[l + 1])
				{
					temp = bubble[l];
					bubble[l] = bubble[l + 1];
					bubble[l + 1] = temp;
				}
			}

		}
		for (j = 0; j < no_data; j++)
		{
			printf("%d ", bubble[j]);
		}
		printf("\n");
	}
	free(bubble);
	fclose(in_file);
	return 0;
}