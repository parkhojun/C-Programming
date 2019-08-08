/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 주사위 숫자 분포                                                       *
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
	int no_cases, no_data, data, data2;
	int temp;
	int arr[100];
	int arr2[100];
	int s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0, s10 = 0, s11 = 0, s12 = 0;


	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*주사위 던지는 횟수*/

		for (j = 0; j < no_data; j++)/*주사위 2개 던지기*/
		{
			fscanf(in_file, "%d %d", &data, &data2); /*숫자 받기*/

			if (data > 0 && data < 7) {/*숫자는 1~6까지*/
				arr[j] = data;
				arr2[j] = data2;
			}
		}
		for (j = 0; j < no_data; j++) {

			temp = arr[j] + arr2[j];

			if (temp == 2) { s2++; }
			if (temp == 3) { s3++; }
			if (temp == 4) { s4++; }
			if (temp == 5) { s5++; }
			if (temp == 6) { s6++; }
			if (temp == 7) { s7++; }
			if (temp == 8) { s8++; }
			if (temp == 9) { s9++; }
			if (temp == 10) { s10++; }
			if (temp == 11) { s11++; }
			if (temp == 12) { s12++; }
		}
		printf("%d %d %d %d %d %d %d %d %d %d %d", s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12);
		printf("\n");
		s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0, s10 = 0, s11 = 0, s12 = 0;

	}
	fclose(in_file);
	return 0;
}