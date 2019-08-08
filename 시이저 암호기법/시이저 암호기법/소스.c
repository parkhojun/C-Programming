/*************************************************************************
*                                                                        *
* Problem :                                                              *
*        ������ ��ȣ���                                                 *
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

int Length(char *data) {
	int index = 0;
	while (data[index] != '\0')
	{
		index++;
	}
	return index;
}

int main(void) {
	FILE *in_file;
	int i, j;
	int no_cases, no_data;//���̽�, �̵�����
	char data[100];

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d", &no_data);

		fscanf(in_file, "%s ", data);


		for (j = 0; j < Length(data); j++)
		{
			if ((data[j] >= 'A') && (data[j] <= 'Z')) {
				data[j] -= 'A';
				if ((data[j] + no_data) < 0) { data[j] += 26; }
				else {
					data[j] = (data[j] + no_data) % 26;
					data[j] += 'A';
				}
			}
			else if ((data[j] >= 'a') && (data[j] <= 'z')) {
				data[j] -= 'a';
				if ((data[j] + no_data) < 0) { data[j] += 26; }
				else {
					data[j] = (data[j] + no_data) % 26;
					data[j] += 'a';
				}
			}

		}
		printf("%s", data);
		printf("\n");
	}
	fclose(in_file);
	return 0;
}