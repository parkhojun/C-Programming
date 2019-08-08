/*************************************************************************
*                                                                        *
* Problem :                                                              *
* ���ڸ� 0���� ���ϱ�                                                    *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                        *
* 20153183 ��ȣ��                                                        *
*                                                                        *
*************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	FILE *in_file;
	int i, j;
	int no_cases, no_data, data;
	int twocnt, fivecnt;

	in_file = fopen("input.txt", "r");
	if (in_file == NULL) exit(1);

	fscanf(in_file, "%d", &no_cases);

	for (i = 0; i < no_cases; i++)
	{
		fscanf(in_file, "%d", &no_data);

		twocnt = 0; fivecnt = 0;

		for (j = 0; j < no_data; j++)
		{
			fscanf(in_file, "%d", &data);
			while (data % 2 == 0 || data % 5 == 0) {
				if (data % 2 == 0) {twocnt++; data /= 2; }
				if (data % 5 == 0) {fivecnt++; data /= 5;}
			}
		}
		if (twocnt <= fivecnt) printf("%d\n", twocnt);
		else printf("%d\n", fivecnt);
	}
	fclose(in_file);
	return 0;
}