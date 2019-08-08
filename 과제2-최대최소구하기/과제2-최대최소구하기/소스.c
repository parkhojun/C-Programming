/*************************************************************************
*														 *
* Problem :                                                 *
* 최대최소구하기                                               *
*                                                       *
*************************************************************************/
/*************************************************************************
*                                                       *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                   *
* 20153183 박호준                                            *
*                                                       *
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main(void) {
	FILE *in_file;
	int no_cases, data;

	int arr[100];
	int x, i, j, k;
	int max, min;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		int arr[100] = { 0, };
		fscanf(in_file, "%d", &x);/*받는 숫자의 갯수 받기*/

		for (j = 0; j < x; j++)/**받는 숫자의 갯수만큼 코드 실행*/
		{

			fscanf(in_file, "%d", &data);
			arr[j] = data;
		}
		max = arr[0]; min = arr[0];

		for (k = 0; k < x; k++) {
			if (max < arr[k]) {
				max = arr[k];
			}
		}

		for (k = 0; k < x; k++) {
			if (min > arr[k]) {
				min = arr[k];
			}
		}
		printf("%d %d\n", max, min);	
	}
	return 0;
}