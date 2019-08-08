#include <stdio.h>
#include <stdlib.h>

int Combine(int m, int n) {
	int i;
	int sum = 0;
	for (i = m; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}

int main(void) {
	FILE *in_file;
	int i, j;
	int no_cases, no_data;
	int x, y;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/

	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d %d", &x,&y);
		Combine(x, y);
	}
	
	return 0;
}