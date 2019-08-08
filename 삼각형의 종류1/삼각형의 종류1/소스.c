/*************************************************************************
*                                                                        *
* Problem :                                                              *
*   삼각형의 종류(1)                                                     *
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
	int a, b, c;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d %d %d", &a, &b, &c);/*받는 숫자의 갯수 받기*/

		if (a + b > c) {
			if (a == b && b==c&&a==c) {
				printf("1");
			}
			else if (c ^ 2 == (b ^ 2) + (a ^ 2)) {
				printf("2");
			}
			else if (b == a && a != c ) {
				printf("3");
			}
			else { printf("4"); }
		}
		else {
			printf("0");
		}
		printf("\n"); 
	}
	fclose(in_file);
	return 0;
}