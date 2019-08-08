/*************************************************************************
*                                                                        *
* Problem :                                                              *
*  ����/���� ���� ����                                                   *
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
	int i;
	int no_cases;
	int x1, y1, x2, y2, x3, y3, x4, y4;
	int temp;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d %d %d %d", &x1, &y1, &x2, &y2);/*�޴� ������ ���� �ޱ�*/
		fscanf(in_file, "%d %d %d %d", &x3, &y3, &x4, &y4);/*�޴� ������ ���� �ޱ�*/

		if (x2 < x1) {
			temp = x1;
			x1 = x2;
			x2 = temp;
		}
		if (x4 < x3) {
			temp = x3;
			x3 = x4;
			x4 = temp;
		}
		if (y2 < y1) {
			temp = y1;
			y1 = y2;
			y2 = temp;
		}
		if (y4 < y3) {
			temp = y3;
			y3 = y4;
			y4 = temp;
		}
		if (y1 == y2) {
			if ((x1 > x3) || (x2 < x3)) {
				printf("0");
			}
			else {
				if ((y1<y3) || (y1>y4)) {
					printf("0");
				}
				else if ((x1 == x3) || (x2 == x3)) {
					printf("2");
				}
				else if ((y1 == y3) || (y1 == y4)) {
					printf("2");
				}
				else {
					printf("1");
				}
			}
		}
		else {
			if ((y1 > y3) || (y2 < y3)) {
				printf("0");
			}
			else {
				if ((x1<x3) || (x1>x4)) {
					printf("0");
				}
				else if ((y1 == y3) || (y2 == y3)) {
					printf("2");
				}
				else if ((x1 == x3) || (x1 == x4)) {
					printf("2");
				}
				else {
					printf("1");
				}
			}
		}

		printf("\n");
	}
		fclose(in_file);
		return 0;
}