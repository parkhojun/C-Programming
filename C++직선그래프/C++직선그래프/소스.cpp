/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                         직선 그래프                                    *
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
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int a;
	int i, j;
	char arr[100][100];

	fin >> a;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			if ((i == a / 2) && (j == a / 2))
				arr[i][j] = 'O';
			else if ((a-1) - i == j)
				arr[i][j] = '*';
			else if (i == a / 2)
				arr[i][j] = '+';
			else if (j == a / 2)
				arr[i][j] = 'I';
			else
				arr[i][j] = '.';
		}
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << ' ' << std::endl;
	}

}

