/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                         다이아몬드 출력                                *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                        *
* 20153183 박호준                                                        *
*                                                                        *
*************************************************************************/

#include <iostream>
#include <fstream>


void hw(std::ifstream&);


int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{
		hw(fin);
		//std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int a;
	int i, j;
	char arr[100][100];

	fin >> a;

	for (i = 0; i < (a/2); i++)// 상단 +, * 조건
	{

		for (j = 0; j < a; j++)
		{
			if ((a / 2 == j) || (j<=(a/2)+i) && (j >= (a / 2) - i))
				arr[i][j] = '+';
			else
				arr[i][j] = '*';

		}
	}

	for (i = 0; i < (a/2); i++)//다이아몬드 상단 출력
	{
		for (j = 0; j < a; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << ' ' << std::endl;
	}


	for (i = (a / 2); i >= 0; i--)// 하단 +, * 조건
	{

		for (j = 0; j < a; j++)
		{
			if ((a / 2 == j) || (j <= (a / 2) + i) && (j >= (a / 2) - i))
				arr[i][j] = '+';
			else
				arr[i][j] = '*';

		}
	}

	for (i = (a / 2); i >= 0; i--)//다이아몬드 하단 출력
	{
		for (j = 0; j < a; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << ' ' << std::endl;
	}

}

