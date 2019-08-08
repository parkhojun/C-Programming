/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 0�� �ƴ� ������ �ڸ��� ���ϱ�                                          *
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
	int sum;
	int cnt2, cnt5, cnt10;
	int data;
	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/
		sum = 1; cnt2 = 0; cnt5 = 0;
		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			fscanf(in_file, "%d ", &data); /*�޴¼��� �ޱ�*/
			if (sum > 100) {
				sum %=100;
			}
			
			while ((data % 2 == 0) || (data % 5 == 0)) {

				if (data % 2 == 0) {
					cnt2++;
					data /= 2;
				}
				if (data % 5 == 0) {
					cnt5++;
					data /= 5;
				}
			}
			sum *= data;
		}

		if (cnt2 > cnt5)
		{
			for (k = 0; k < cnt2 - cnt5; k++) {
				if (sum > 1000) { sum %= 100; }
				sum *= 2;
			}
			cnt10 = cnt5;
		}

		else {
			for (k = 0; k < cnt5 - cnt2; k++) {
				if (sum > 1000) { sum %= 100; }
				sum *= 5;
			}
			cnt10 = cnt2;
		}

		sum %= 10;
		printf("%d %d",sum, cnt10);
		printf("\n");
	}
	
	fclose(in_file);
	return 0;
}