/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 모래시계 출력                                                          *
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
	int i, j, k;
	int no_cases, no_data;
	int x, y;


	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/

		x = -1; y = -1;
		for (j = 0; j < no_data; j++)/*받는숫자의 갯수만큼 실행*/
		{
			if (y >= no_data / 2) {
				x--; y++;
			}
			else {
				x++; y++;
			}
			for (k = 0; k < no_data; k++) {
				
				if (x > k) {
					printf("-");
				}
				else if (x >= no_data-k) {
					printf("-");
				}
				else {
					if (j % 2 == 0 && k % 2 == 0) {
							printf("*");
						}
					else if(j % 2 == 1 && k % 2 == 1) {
						printf("*");
					}
					else { printf("+"); }
				}

			}
			printf("\n");
		}
	}
	fclose(in_file);
	return 0;
}