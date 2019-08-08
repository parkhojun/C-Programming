/*************************************************************************
*                                                                        *
* Problem :                                                              *
* �ֻ��� ���� ����                                                       *
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
	int no_cases, no_data, data, data2;
	int temp;
	int arr[100];
	int arr2[100];
	int s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0, s10 = 0, s11 = 0, s12 = 0;


	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�ֻ��� ������ Ƚ��*/

		for (j = 0; j < no_data; j++)/*�ֻ��� 2�� ������*/
		{
			fscanf(in_file, "%d %d", &data, &data2); /*���� �ޱ�*/

			if (data > 0 && data < 7) {/*���ڴ� 1~6����*/
				arr[j] = data;
				arr2[j] = data2;
			}
		}
		for (j = 0; j < no_data; j++) {

			temp = arr[j] + arr2[j];

			if (temp == 2) { s2++; }
			if (temp == 3) { s3++; }
			if (temp == 4) { s4++; }
			if (temp == 5) { s5++; }
			if (temp == 6) { s6++; }
			if (temp == 7) { s7++; }
			if (temp == 8) { s8++; }
			if (temp == 9) { s9++; }
			if (temp == 10) { s10++; }
			if (temp == 11) { s11++; }
			if (temp == 12) { s12++; }
		}
		printf("%d %d %d %d %d %d %d %d %d %d %d", s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12);
		printf("\n");
		s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0, s10 = 0, s11 = 0, s12 = 0;

	}
	fclose(in_file);
	return 0;
}