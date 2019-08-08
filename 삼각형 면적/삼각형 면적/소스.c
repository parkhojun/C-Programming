/*************************************************************************
*                                                                        *
* Problem :                                                              *
*     �ﰢ�� ����                                                        *
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
	int a1, a2, b1, b2, c1, c2;
	int area;
	int temp;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/
	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	
	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		//fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/
		
		fscanf(in_file, "%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2 ); /*�޴¼��� �ޱ�*/
		area = ((b1 - a1)*(c2 - a2) - (c1 - a1)*(b2 - a2));
		temp = 1;
		if (area < 0) {
			temp = -area;
			printf("%d ", temp);
		}
		else if( area > 0) {
			printf("%d ",area);
		}
		else {
			printf("0 ");
		}
		if (area > 0) {
			printf("1");
		}
		else if (area < 0) {
			printf("-1");
		}
		else {
			printf("0 ");
		}

		printf("\n"); 
	}
	fclose(in_file);
	return 0;
}
//���� 0
//���� �ð���� -1
//��� ������ 1