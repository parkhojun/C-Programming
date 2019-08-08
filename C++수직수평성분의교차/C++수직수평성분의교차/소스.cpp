/*************************************************************************
*                                                                        *
* Problem :               수직수평성분의 교차                            *                           *
*                                                                        *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                        *
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
		std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int i, j;
	int x1, y1, x2, y2, x3, y3, x4, y4;
	int temp;

	fin >> x1 >> y1 >> x2 >> y2;
	fin >> x3 >> y3 >> x4 >> y4;

	if (x2 < x1) {
		temp = x1;
		x1 = x2;
		x2 = temp;
	}
	if (x4 < x3) {
		temp = x3;
		x3 = x4;
		x4 = temp;
	}
	if (y2 < y1) {
		temp = y1;
		y1 = y2;
		y2 = temp;
	}
	if (y4 < y3) {
		temp = y3;
		y3 = y4;
		y4 = temp;
	}
	if (y1 == y2) {
		if ((x1 > x3) || (x2 < x3)) {
			std::cout << 0;
		}
		else {
			if ((y1<y3) || (y1>y4)) {
				std::cout << 0;
			}
			else if ((x1 == x3) || (x2 == x3)) {
				std::cout << 2;
			}
			else if ((y1 == y3) || (y1 == y4)) {
				std::cout << 2;
			}
			else {
				std::cout << 1;
			}
		}
	}
	else {
		if ((y1 > y3) || (y2 < y3)) {
			std::cout << 0;
		}
		else {
			if ((x1<x3) || (x1>x4)) {
				std::cout << 0;
			}
			else if ((y1 == y3) || (y2 == y3)) {
				std::cout << 2;
			}
			else if ((x1 == x3) || (x1 == x4)) {
				std::cout << 2;
			}
			else {
				std::cout << 1;
			}
		}
	}

}
