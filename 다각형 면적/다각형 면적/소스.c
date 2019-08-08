/*************************************************************************
*                                                                        *
* Problem :                                                              *
*  다각형 면적                                                           *
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
	int area, temp, x, y;
	int arrx[100],arry[100];

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/

		for (j = 0; j < no_data; j++)/*받는숫자의 갯수만큼 실행*/
		{
			fscanf(in_file, "%d %d", &x, &y);/*받는숫자 받기*/
			arrx[j] = x; arry[j] = y;
		}
		area = 0;

		for (j = 0; j < no_data-1; j++) {
			area += (arrx[j] + arrx[j + 1]) * (arry[j+1] - arry[j]);
		}
		area += (arrx[j] + arrx[0]) * (arry[0] - arry[j]);
		if (area < 0) {
			temp = -area;
			printf("%d -1",temp);
		}
		else if(area>0){
			printf("%d 1",area);
		}
		else {

		}
		printf("\n");  //(보통 출력함, 케이스 갯수만큼 코드실행 포문 안에 있는거라서 케이스갯수만큼 출력됨)
	}
	fclose(in_file);
	return 0;
}
//시계-1 음수
//반시계1 양수