/*************************************************************************
*                                                                        *
* Problem :                                                              *
*   ������                                                             *
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
	int data;
	int arr[100][100];
	int a, b;
	int sum;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/

		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			for (k = 0; k < no_data; k++) {
				fscanf(in_file, "%d ", &data);
				arr[j][k] = data;
			}
		}
		fscanf(in_file, "%d %d", &a, &b);

		sum = 0;

		for (j = 0; j <= b - a; j) {
			if (a > b) {break;}
			if (a <= 0) {
				for (k = 0; k < no_data + a; k++) {
					if (a > b) {break;
				}
					sum += arr[k - a][k];
				}
			}
			else {
				for (k = 0; k < no_data - a; k++) {
					if (a > b) { break; }
					sum += arr[k][k + a];
				}
			}
			a++;
		}
		printf("%d", sum);
		printf("\n");  //(���� �����, ���̽� ������ŭ �ڵ���� ���� �ȿ� �ִ°Ŷ� ���̽�������ŭ ��µ�)
	}
	fclose(in_file);
	return 0;
}