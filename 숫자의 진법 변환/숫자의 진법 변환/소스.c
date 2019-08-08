/*************************************************************************
*                                                                        *
* Problem :                                                              *
* 숫자의 진법 변환                                                       *
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
	unsigned int data;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{


			fscanf(in_file, "%x", &data); /*받는숫자 받기*/

				printf("%d", data);
				printf("\n");


	}
	fclose(in_file);
	return 0;
}