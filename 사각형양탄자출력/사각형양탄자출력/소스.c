/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 사각형 양탄자 출력                                                     *
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
	int i, j, k, p;
	int no_cases, no_data;


	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/


		for (p = 0; p < no_data; p++)
			printf("+");
		printf("\n");

		for (j = 0; j < no_data - 2; j++)/*받는숫자의 갯수만큼 실행*/
		{
			for (k = 0; k < no_data; k++) {

				if (k == 0 || k == no_data - 1) {
					printf("I");
				}
				if (k != 0 && k != no_data - 1) {

					if ((j % 2 == 0))
					{
						if (k % 2 == 1)
							printf("X");
						else
							printf("-");
					}
					if ((j % 2 == 1)) {
						if (k % 2 == 1)
							printf("-");
						else
							printf("X");
					}
				}

			}
			printf("\n");
		}

		for (p = 0; p < no_data; p++)
			printf("+");
		printf("\n");

		
	}
	return 0;
}