/*************************************************************************
*                                                                        *
* Problem :                                                              *
*  MagicSquare                                                           *
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
#include <memory.h>

int main(void) {
	FILE *in_file;
	int i, j, k;
	int no_cases, no_data, data, a, b, c, d, e;
	int arr[100][100];

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/

		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			for (k = 0; k < no_data; k++)
			{
				fscanf(in_file, "%d ", &data); /*�޴¼��� �ޱ�*/
				arr[j][k] = data;
			}
		}
		a = 0;
		for (j = 0; j < no_data; j++) {
			a += arr[j][0];
		}
		for (j = 0; j < no_data; j++) {
			b = 0, c = 0;
			for (k = 0; k < no_data; k++) {
				b += arr[j][k];
				c += arr[k][j];
			}
			if ((a != b || a != c)) {
				a = -1; break;
			}

		}
		d = 0, e = 0;
		for (j = 0; j < no_data; j++) {
			d += arr[j][j];
			e += arr[j][no_data-j-1];
		}
		if ((a == d && a == e))
		{
			printf("%d", a);
		}
		else
		{
			printf("-1");
		}

		printf("\n");
	}
	fclose(in_file);
	return 0;
}