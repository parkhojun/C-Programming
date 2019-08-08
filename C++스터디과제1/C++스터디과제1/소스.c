/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                 포스카 스터디 과제                                     *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                        *
* 20153183 박호준                                                        *
*                                                                        *
*************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cnt0 = 0;
int cnt1 = 0;

void fibonacci(int n) {

	if (n == 0) {
		cnt0++;
	}
	else if (n == 1) {
		cnt1++;
	}
	else {
		fibonacci(n - 1);
		fibonacci(n - 2);
	}
}


int main(void) {

	FILE *in_file;
	int i;
	int no_cases, no_data;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/

		cnt0 = cnt1 = 0;
		fibonacci(no_data);
		printf("%d %d\n", cnt0, cnt1);

	}
	fclose(in_file);
	return 0;
}