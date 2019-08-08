/*************************************************************************
*                                                                        *
* Problem :                                                              *
*     삼각형 면적                                                        *
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
	int a1, a2, b1, b2, c1, c2;
	int area;
	int temp;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/
	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	
	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		//fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/
		
		fscanf(in_file, "%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2 ); /*받는숫자 받기*/
		area = ((b1 - a1)*(c2 - a2) - (c1 - a1)*(b2 - a2));
		temp = 1;
		if (area < 0) {
			temp = -area;
			printf("%d ", temp);
		}
		else if( area > 0) {
			printf("%d ",area);
		}
		else {
			printf("0 ");
		}
		if (area > 0) {
			printf("1");
		}
		else if (area < 0) {
			printf("-1");
		}
		else {
			printf("0 ");
		}

		printf("\n"); 
	}
	fclose(in_file);
	return 0;
}
//직선 0
//음수 시계방향 -1
//양수 정방향 1