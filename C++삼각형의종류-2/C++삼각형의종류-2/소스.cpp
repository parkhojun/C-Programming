
/*************************************************************************
*                                                                        *
* Problem :             삼각형의종류2                                    *
*                                                                        *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1 학년                        *
* 20153183 박호준                                                        *
*                                                                        *
*************************************************************************/

#include <iostream>
#include <fstream>
#include <cmath>


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

	int x1, y1, x2, y2, x3, y3;
	double x, y, z, a, b, c, tmp1, tmp2;
	int i, j;

	fin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		
	x = sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)));
	y = sqrt(((x1 - x3)*(x1 - x3)) + ((y1 - y3)*(y1 - y3)));
	z = sqrt(((x2 - x3)*(x2 - x3)) + ((y2 - y3)*(y2 - y3)));

	a = (((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)));
	b = (((x1 - x3)*(x1 - x3)) + ((y1 - y3)*(y1 - y3)));
	c = (((x2 - x3)*(x2 - x3)) + ((y2 - y3)*(y2 - y3)));



	if (x > y) { tmp1 = x;		x = y;		y = tmp1; }
	if (x > z) { tmp1 = x;		x = z;		z = tmp1; }
	if (y > z) { tmp1 = y;		y = z;		z = tmp1; }
	///////////////////////////
	if (a > b) { tmp2 = a;		a = b;		b = tmp2; }
	if (a > c) { tmp2 = a;		a = c;		c = tmp2; }
	if (b > c) { tmp2 = b;		b = c;		c = tmp2; }




	if (x + y > z) {
			if (a + b == c) { std::cout << 1; }
			else if (a + b < c) { std::cout << 2; }
			else if (a + b > c) { std::cout << 3; }
	}
	else
	{
		std::cout << 0;
	}
	
}

