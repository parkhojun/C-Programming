/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                  두 정수 모든 숫자 합 구하기                           *
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


void hw_5(std::ifstream&);


int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{

		hw_5(fin);

	}
	fin.close();

	return 0;
}

void hw_5(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int start_num;
	int end_num;
	int i;

	fin >> start_num >> end_num;

	int sum = 0;
	for (i = start_num; i <= end_num; i++)
	{
		sum += i;
	}
	std::cout << sum << std::endl;
}