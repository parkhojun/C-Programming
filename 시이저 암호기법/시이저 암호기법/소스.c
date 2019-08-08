/*************************************************************************
*                                                                        *
* Problem :                                                              *
*        시이저 암호기법                                                 *
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

int Length(char *data) {
	int index = 0;
	while (data[index] != '\0')
	{
		index++;
	}
	return index;
}

int main(void) {
	FILE *in_file;
	int i, j;
	int no_cases, no_data;//케이스, 이동숫자
	char data[100];

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d", &no_data);

		fscanf(in_file, "%s ", data);


		for (j = 0; j < Length(data); j++)
		{
			if ((data[j] >= 'A') && (data[j] <= 'Z')) {
				data[j] -= 'A';
				if ((data[j] + no_data) < 0) { data[j] += 26; }
				else {
					data[j] = (data[j] + no_data) % 26;
					data[j] += 'A';
				}
			}
			else if ((data[j] >= 'a') && (data[j] <= 'z')) {
				data[j] -= 'a';
				if ((data[j] + no_data) < 0) { data[j] += 26; }
				else {
					data[j] = (data[j] + no_data) % 26;
					data[j] += 'a';
				}
			}

		}
		printf("%s", data);
		printf("\n");
	}
	fclose(in_file);
	return 0;
}