
/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 직선그래프출력하기                                                     *
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
	int data;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/


	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/

		for (j = 0; j < no_data; j++) {
			for (k = 0; k < no_data; k++)/*받는숫자의 갯수만큼 실행*/
			{
				if (j == no_data / 2 && k == no_data / 2) {
				printf("O");// O 출력
				}
				else if (k == (no_data-1) - j) {
					printf("*");// *출력
				}
				else if (k == no_data / 2) {
					printf("I");// I 출력
				}
				else if (j == no_data / 2) {
					printf("+");// + 출력
				}
				else {
					printf(".");// .출력
				}
			}
			printf("\n");
		}

	}/*받는숫자의 갯수만큼 실행 끝부분*/

		 //(보통 출력함, 케이스 갯수만큼 코드실행 포문 안에 있는거라서 케이스갯수만큼 출력됨)

	fclose(in_file);
	return 0;
}