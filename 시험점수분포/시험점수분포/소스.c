/*************************************************************************
*                                                                        *
* Problem :                                                              *
*    ���� ���� ����                                                      *
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
	int data, temp, cnt;
	int arr[101];

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/
		

		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			fscanf(in_file, "%d ", &data); /*�޴¼��� �ޱ�*/
			arr[j] = data;
		}/*�޴¼����� ������ŭ ���� ���κ�*/

		for (j = 0; j < no_data-1; j++) {
			for (k = 0; k < no_data - 1; k++) {

				if (arr[k] > arr[k + 1]) {

					temp = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = temp;
				}
			}
		}
		cnt = 1;
		printf("%d ", arr[0]);
		for (j = 0; j < no_data-1; j++) {
			
			if (arr[j] == arr[j + 1]) {
				cnt++;
			}
			else {
				printf("%d %d ", cnt, arr[j + 1]);
				cnt = 1;
			}
		}
		printf("%d ", cnt);
		printf("\n");
	}
	fclose(in_file);
	return 0;
}