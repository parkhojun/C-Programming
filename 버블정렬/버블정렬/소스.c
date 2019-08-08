/*************************************************************************
*                                                                        *
* Problem :                                                              *
*  버블정렬                                                              *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                        *
* 20153183 박호준                                                        *
*                                                                        *
*************************************************************************/

#define _crt_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *in_file;
	int i, j, k, l;
	int no_cases, no_data;
	int data;
	int temp;
	int *bubble;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/

		bubble = (int*)malloc(sizeof(int)* no_data);

		for (j = 0; j < no_data; j++)/*받는숫자의 갯수만큼 실행*/
		{
			fscanf(in_file, "%d", &data); /*받는숫자 받기*/

			bubble[j] = data;
		}
		for (k = 0; k < no_data-1; k++) {
			for (l = 0; l < no_data -1-k; l++) {
				if (bubble[l] > bubble[l + 1])
				{
					temp = bubble[l];
					bubble[l] = bubble[l + 1];
					bubble[l + 1] = temp;
				}
			}

		}
		for (j = 0; j < no_data; j++)
		{
			printf("%d ", bubble[j]);
		}
		printf("\n");
	}
	free(bubble);
	fclose(in_file);
	return 0;
}