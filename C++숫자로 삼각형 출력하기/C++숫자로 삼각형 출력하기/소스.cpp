/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                  숫자로 삼각형 구하기                                  *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                        *
* 20153183 박호준                                                        *
*                                                                        *
*************************************************************************/

#define _crt_secure_no_warnings
#include <iostream>
#include <fstream>


void hw_10(std::ifstream&);
int calc_elem(int i, int j, int k);


int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{

		hw_10(fin);

	}
	fin.close();

	return 0;
}


void hw_10(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int k;
	int i,j;

	fin >> k;

	for (i = 0; i < k ; i++)
	{
		for (j = 0; j <= i; j++)
		{
			int elem;
			elem = calc_elem(i+1, j+1, k);
			std::cout <<elem << " ";
		}
		std::cout << std::endl;
	}
}

int calc_elem(int i, int j,int k)
{
	int res = 0;

	res = (j - 1) * k - ((j - 1)*(j - 2) / 2);
	res += (i - j) + 1;

	return res;
}