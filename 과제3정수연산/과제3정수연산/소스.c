/*************************************************************************
*																         *
* Problem :														         *
* 정수연산															     *
*																	     *
*************************************************************************/
/*************************************************************************
*																		 *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년					     *
* 20153183 박호준														 *
*																	     *
*************************************************************************/
 

#include <stdio.h>
#include <stdlib.h>

int SachickYeonsan(int a, int b){
	int add, sub, sub2, mult, mok, nam, com, mat;

	add = a + b;
	sub = a - b; 
	if (sub < 0) sub2 = -sub;
	else sub2 = sub;
	mult = a * b;
	mok = a / b;
	nam = a % b;
	if (a >= b)
		com = a;
	else com = b;
	
	if (a == b)
		mat = 1;
	else
		mat = 0;
	
	printf("%d %d %d %d %d %d %d %d\n", add, sub, sub2, mult, mok, nam, com, mat);
	return 0;
}



int main(void) {
	FILE *in_file;

	int a, b,i, no_cases;

	in_file = fopen("input.txt", "r"); /*파일 열기*/
	if (in_file == NULL) exit(1);/*빈 파일일시 끝내기*/

	fscanf(in_file, "%d", &no_cases); /*케이스개수 받기*/
	for (i = 0; i < no_cases; i++)/*케이스 갯수만큼 코드 실행*/
	{
		fscanf(in_file, "%d %d", &a,&b);
		SachickYeonsan(a, b);
	}

	return 0;
}


