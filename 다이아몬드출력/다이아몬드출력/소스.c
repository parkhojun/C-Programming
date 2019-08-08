/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 다이아몬드 출력                                                        *
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
	int i, j;
	int no_cases, no_data;
	int x, y, z;
	int count = 1;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/
		no_data /= 2;

		for (j = -no_data; j <= no_data; j++)/*받는숫자의 갯수만큼 실행*/
		{

			if (j < 0)
			{
				for (y = 0; y < -j; y++)
					printf("*");
				for (y = 0; y < (no_data + j) * 2 + 1; y++)
					printf("+");
				for (y = 0; y < -j; y++)
					printf("*");

				printf("\n");
			}

			else
			{
				for (y = 0; y < j; y++)
					printf("*");
				for (y = 0; y < (no_data - j) * 2 + 1; y++)
					printf("+");
				for (y = 0; y < j; y++)
					printf("*");

				printf("\n");
			}

		}

	}
	fclose(in_file);
	return 0;
}