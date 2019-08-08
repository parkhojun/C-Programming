/*************************************************************************
*														 *
* Problem :                                                 *
* �ִ��ּұ��ϱ�                                               *
*                                                       *
*************************************************************************/
/*************************************************************************
*                                                       *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                   *
* 20153183 ��ȣ��                                            *
*                                                       *
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main(void) {
	FILE *in_file;
	int no_cases, data;

	int arr[100];
	int x, i, j, k;
	int max, min;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		int arr[100] = { 0, };
		fscanf(in_file, "%d", &x);/*�޴� ������ ���� �ޱ�*/

		for (j = 0; j < x; j++)/**�޴� ������ ������ŭ �ڵ� ����*/
		{

			fscanf(in_file, "%d", &data);
			arr[j] = data;
		}
		max = arr[0]; min = arr[0];

		for (k = 0; k < x; k++) {
			if (max < arr[k]) {
				max = arr[k];
			}
		}

		for (k = 0; k < x; k++) {
			if (min > arr[k]) {
				min = arr[k];
			}
		}
		printf("%d %d\n", max, min);	
	}
	return 0;
}