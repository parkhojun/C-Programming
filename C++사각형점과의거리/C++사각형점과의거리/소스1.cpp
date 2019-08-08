
/*************************************************************************
*                                                                        *
* Problem :               사각형 점과의 거리                             *
*                                                                        *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                        *
* 20153183 박호준                                                        *
*                                                                        *
*************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>


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

	int a1, a2, b1, b2;
	int x, y;

	fin >> a1 >> b1 >> a2 >> b2;
	fin >> x >> y;


	if (x >= a1 && x <= a2 && b1 <= y&&y <= b2) {
		printf("0 0\n");
	}
	else if (x > a2 && y > b2) {
		printf("%d %d\n", ((y - b2) * (y - b2)) + ((x - a2)*(x - a2)), (y - b2) + (x - a2));
	}
	else if (y > b2&&x < a1) {
		printf("%d %d\n", ((a1 - x) * (a1 - x)) + ((y - b2)*(y - b2)), (a1 - x) + (y - b2));
	}
	else if (y < b1 && x < a1) {
		printf("%d %d\n", ((a1 - x) * (a1 - x)) + ((b1 - y)*(b1 - y)), (a1 - x) + (b1 - y));
	}
	else if (y<b1 && x>a2) {
		printf("%d %d\n", ((x - a2) * (x - a2)) + ((b1 - y)*(b1 - y)), (x - a2) + (b1 - y));
	}
	else if (y > b2) {
		printf("%d %d\n", (y - b2)*(y - b2), (y - b2));
	}
	else if (y < b1) {
		printf("%d %d\n", (b1 - y)*(b1 - y), (b1 - y));
	}
	else if (x < a1) {
		printf("%d %d\n", (a1 - x)*(a1 - x), (a1 - x));
	}
	else if (x > a2) {
		printf("%d %d\n", (x - a2)*(x - a2), (x - a2));
	}


}