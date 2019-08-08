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
	int no_cases, no_data;
	int sum;
	int cnt2, cnt5, cnt10;
	int data;
	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/
		sum = 1; cnt2 = 0; cnt5 = 0;
		for (j = 0; j < no_data; j++)/*받는숫자의 갯수만큼 실행*/
		{
			fscanf(in_file, "%d ", &data); /*받는숫자 받기*/
			if (sum > 100) {
				sum %=100;
			}
			
			while ((data % 2 == 0) || (data % 5 == 0)) {

				if (data % 2 == 0) {
					cnt2++;
					data /= 2;
				}
				if (data % 5 == 0) {
					cnt5++;
					data /= 5;
				}
			}
			sum *= data;
		}

		if (cnt2 > cnt5)
		{
			for (k = 0; k < cnt2 - cnt5; k++) {
				if (sum > 1000) { sum %= 100; }
				sum *= 2;
			}
			cnt10 = cnt5;
		}

		else {
			for (k = 0; k < cnt5 - cnt2; k++) {
				if (sum > 1000) { sum %= 100; }
				sum *= 5;
			}
			cnt10 = cnt2;
		}

		sum %= 10;
		printf("%d %d",sum, cnt10);
		printf("\n");
	}
	
	fclose(in_file);
	return 0;
}