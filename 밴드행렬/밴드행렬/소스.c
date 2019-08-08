/*************************************************************************
*                                                                        *
* Problem :                                                              *
*   밴드행렬                                                             *
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
	int arr[100][100];
	int a, b;
	int sum;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/

		for (j = 0; j < no_data; j++)/*받는숫자의 갯수만큼 실행*/
		{
			for (k = 0; k < no_data; k++) {
				fscanf(in_file, "%d ", &data);
				arr[j][k] = data;
			}
		}
		fscanf(in_file, "%d %d", &a, &b);

		sum = 0;

		for (j = 0; j <= b - a; j) {
			if (a > b) {break;}
			if (a <= 0) {
				for (k = 0; k < no_data + a; k++) {
					if (a > b) {break;
				}
					sum += arr[k - a][k];
				}
			}
			else {
				for (k = 0; k < no_data - a; k++) {
					if (a > b) { break; }
					sum += arr[k][k + a];
				}
			}
			a++;
		}
		printf("%d", sum);
		printf("\n");  //(보통 출력함, 케이스 갯수만큼 코드실행 포문 안에 있는거라서 케이스갯수만큼 출력됨)
	}
	fclose(in_file);
	return 0;
}