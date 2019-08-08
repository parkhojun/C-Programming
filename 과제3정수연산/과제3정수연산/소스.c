/*************************************************************************
*																         *
* Problem :														         *
* ��������															     *
*																	     *
*************************************************************************/
/*************************************************************************
*																		 *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�					     *
* 20153183 ��ȣ��														 *
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

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/
	for (i = 0; i < no_cases; i++)/*���̽� ������ŭ �ڵ� ����*/
	{
		fscanf(in_file, "%d %d", &a,&b);
		SachickYeonsan(a, b);
	}

	return 0;
}


