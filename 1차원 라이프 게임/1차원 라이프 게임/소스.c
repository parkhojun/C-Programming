/*************************************************************************
*                                                                        *
* Problem :                                                              *
*               1차원 라이프 게임                                        *
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
	int data, data2;
	int arr1[50];
	int arr2[50];

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/
	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d %d", &no_data, &data);/*받는 숫자의 갯수 받기*/

		for (j = 0; j < no_data; j++)/*받는숫자의 갯수만큼 실행*/
		{
			fscanf(in_file, "%d ", &data2);
			arr2[j] = data2;
		}
		for (j = 0; j < data; j++) {
			for (k = 0; k < no_data; k++) {
				arr1[k] = arr2[k];
			}
			for (k = 0; k < no_data; k++) {
				if (k == 0) {
					if (((arr1[k + 1] < 3)) && (arr1[k]>0)) { arr2[k] -= 1; }
					else if ((arr1[k + 1]>7) && (arr1[k]>0)) { arr2[k] -= 1; }
					else if (((arr1[k + 1] >= 4) && (arr1[k + 1] <= 7)) && (arr1[k] < 9)) { arr2[k] += 1; }
				}
				else if (k == (no_data-1)) {
					if ((arr1[k - 1] < 3) && (arr1[k]>0)) { arr2[k] -= 1; }
					else if ((arr1[k - 1] > 7) && (arr1[k]>0)) { arr2[k] -= 1; }
					else if (((arr1[k - 1] >= 4) && (arr1[k - 1] <= 7)) && (arr1[k] < 9)) { arr2[k] += 1; }
				}
				else {
					if (((arr1[k - 1]) + (arr1[k + 1]) < 3) && (arr1[k] > 0)) { arr2[k] -= 1; }
					else if (((arr1[k - 1]) + (arr1[k + 1]) > 7) && (arr1[k] > 0)) { arr2[k] -= 1; }
					else if ((((arr1[k + 1]) + (arr1[k - 1]) >= 4) && ((arr1[k + 1]) + (arr1[k - 1]) <= 7)) && (arr1[k] < 9)) { arr2[k] += 1; }
				}
			}
		}
		for (j = 0; j < no_data; j++)
		{
			printf("%d ", arr2[j]);
		}
		printf("\n");
	}
	fclose(in_file);
	return 0;
}