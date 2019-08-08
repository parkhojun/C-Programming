/*************************************************************************
*                                                                        *
* Problem :                                                              *
*  �ٰ��� ����                                                           *
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
	int i, j;
	int no_cases, no_data;
	int area, temp, x, y;
	int arrx[100],arry[100];

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);/*�޴� ������ ���� �ޱ�*/

		for (j = 0; j < no_data; j++)/*�޴¼����� ������ŭ ����*/
		{
			fscanf(in_file, "%d %d", &x, &y);/*�޴¼��� �ޱ�*/
			arrx[j] = x; arry[j] = y;
		}
		area = 0;

		for (j = 0; j < no_data-1; j++) {
			area += (arrx[j] + arrx[j + 1]) * (arry[j+1] - arry[j]);
		}
		area += (arrx[j] + arrx[0]) * (arry[0] - arry[j]);
		if (area < 0) {
			temp = -area;
			printf("%d -1",temp);
		}
		else if(area>0){
			printf("%d 1",area);
		}
		else {

		}
		printf("\n");  //(���� �����, ���̽� ������ŭ �ڵ���� ���� �ȿ� �ִ°Ŷ� ���̽�������ŭ ��µ�)
	}
	fclose(in_file);
	return 0;
}
//�ð�-1 ����
//�ݽð�1 ���