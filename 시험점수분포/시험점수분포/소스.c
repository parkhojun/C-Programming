/*************************************************************************
*                                                                        *
* Problem :                                                              *
*    시험 점수 분포                                                      *
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
	int data, temp, cnt;
	int arr[101];

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);/*받는 숫자의 갯수 받기*/
		

		for (j = 0; j < no_data; j++)/*받는숫자의 갯수만큼 실행*/
		{
			fscanf(in_file, "%d ", &data); /*받는숫자 받기*/
			arr[j] = data;
		}/*받는숫자의 갯수만큼 실행 끝부분*/

		for (j = 0; j < no_data-1; j++) {
			for (k = 0; k < no_data - 1; k++) {

				if (arr[k] > arr[k + 1]) {

					temp = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = temp;
				}
			}
		}
		cnt = 1;
		printf("%d ", arr[0]);
		for (j = 0; j < no_data-1; j++) {
			
			if (arr[j] == arr[j + 1]) {
				cnt++;
			}
			else {
				printf("%d %d ", cnt, arr[j + 1]);
				cnt = 1;
			}
		}
		printf("%d ", cnt);
		printf("\n");
	}
	fclose(in_file);
	return 0;
}