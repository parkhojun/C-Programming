/*************************************************************************
*                                                                        *
* Problem :                                                              *
*  사각형 점과의 거리                                                    *
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
	int i;
	int no_cases;
	int a1, a2, b1, b2;
	int x , y;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/
	
	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d %d %d %d", &a1, &b1, &a2, &b2);/*받는 숫자의 갯수 받기*/

		fscanf(in_file, "%d %d", &x, &y);

		if (x >= a1 && x <= a2 && b1 <= y&&y<= b2) {
			printf("0 0\n");
		}
		else if (x > a2 && y > b2) {
			printf("%d %d\n", ((y - b2) * (y - b2)) + ((x - a2)*(x - a2)), (y - b2) + (x - a2));
		}
		else if (y > b2&&x < a1) {
			printf("%d %d\n", ((a1-x) * (a1 - x)) + ((y-b2)*(y - b2)), (a1 - x) + (y - b2));
		}
		else if (y < b1 && x < a1) {
			printf("%d %d\n", ((a1 - x) * (a1 - x)) + ((b1 - y)*(b1 - y)), (a1 - x) + (b1 - y));
		}
		else if (y<b1 && x>a2) {
			printf("%d %d\n", ((x-a2) * (x - a2)) + ((b1-y)*(b1 - y)), (x - a2) + (b1 - y));
		}
		else if (y > b2) {
			printf("%d %d\n", (y-b2)*(y-b2), (y-b2));
		}
		else if (y < b1) {
			printf("%d %d\n", (b1-y)*(b1 - y), (b1 - y));
		}
		else if (x < a1) {
			printf("%d %d\n", (a1-x)*(a1 - x), (a1 - x));
		}
		else if (x > a2) {
			printf("%d %d\n", (x-a2)*(x - a2), (x - a2));
		}
			
	}
	fclose(in_file);
	return 0;
}