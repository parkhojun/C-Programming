/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 0이 아닌 마지막 자리수 구하기                                          *
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
	int no_cases, no_data, no_data2;
	int data;
	int arr[100][100];
	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d %d", &no_data, &no_data2);/* 행  렬 */
		fscanf(in_file, "%d ", &data); /* 횟수 받기 */

		for (j = 0; j < no_data; j++) {
			for (k = 0; k < no_data2; k++) {
				arr[j][k] = no_data2;





			}
		}
		



		printf("\n");
	}
	fclose(in_file);
	return 0;
}