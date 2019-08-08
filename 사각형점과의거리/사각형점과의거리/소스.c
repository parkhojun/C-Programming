/*************************************************************************
*                                                                        *
* Problem :                                                              *
*  �簢�� ������ �Ÿ�                                                    *
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
	int a1, a2, b1, b2;
	int x , y;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/
	
	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d %d %d %d", &a1, &b1, &a2, &b2);/*�޴� ������ ���� �ޱ�*/

		fscanf(in_file, "%d %d", &x, &y);

		if (x >= a1 && x <= a2 && b1 <= y&&y<= b2) {
			printf("0 0\n");
		}
		else if (x > a2 && y > b2) {
			printf("%d %d\n", ((y - b2) * (y - b2)) + ((x - a2)*(x - a2)), (y - b2) + (x - a2));
		}
		else if (y > b2&&x < a1) {
			printf("%d %d\n", ((a1-x) * (a1 - x)) + ((y-b2)*(y - b2)), (a1 - x) + (y - b2));
		}
		else if (y < b1 && x < a1) {
			printf("%d %d\n", ((a1 - x) * (a1 - x)) + ((b1 - y)*(b1 - y)), (a1 - x) + (b1 - y));
		}
		else if (y<b1 && x>a2) {
			printf("%d %d\n", ((x-a2) * (x - a2)) + ((b1-y)*(b1 - y)), (x - a2) + (b1 - y));
		}
		else if (y > b2) {
			printf("%d %d\n", (y-b2)*(y-b2), (y-b2));
		}
		else if (y < b1) {
			printf("%d %d\n", (b1-y)*(b1 - y), (b1 - y));
		}
		else if (x < a1) {
			printf("%d %d\n", (a1-x)*(a1 - x), (a1 - x));
		}
		else if (x > a2) {
			printf("%d %d\n", (x-a2)*(x - a2), (x - a2));
		}
			
	}
	fclose(in_file);
	return 0;
}