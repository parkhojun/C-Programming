
/*************************************************************************
*                                                                        *
* Problem :         삼각형 면적                                          *
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
		std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기


	int a1, a2, b1, b2, c1, c2;
	int area;
	int temp;

	fin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	area = ((b1 - a1)*(c2 - a2) - (c1 - a1)*(b2 - a2));
	temp = 1;
	if (area < 0) {
		temp = -area;
		std::cout << temp <<' ';
	}
	else if (area > 0) {
		std::cout << area << ' ';
	}
	else {
		std::cout << 0 << ' ';
	}
	if (area > 0) {
		std::cout << 1 << ' ';
	}
	else if (area < 0) {
		std::cout << -1 << ' ';
	}
	else {
		std::cout << 0 << ' ';
	}


}