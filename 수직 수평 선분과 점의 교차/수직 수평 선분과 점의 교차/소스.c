/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 수직/수평 선분과 점의 교차                                             *
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
	int x1, y1, x2, y2, x3, y3;
	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/

		fscanf(in_file, "%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3); /*받는숫자 받기*/

		if (x1 == x2 == x3) {
			if () {

			}

		}

		printf("\n");
		fclose(in_file);
		return 0;
	}
}