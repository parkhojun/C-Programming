/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                         삼각형의 종류                                  *
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

	int a, b, c;
	
	fin >> a >> b >> c; //변 a b c 입력
	
	if (a + b > c)//삼각형 조건
	{
		if ((a == b) && (b == c) && (c == a))//정삼각형
		{
			std::cout << "1" << std::endl;
		}
		else if ((c * c) == (a * a) + (b * b))//직각삼각형
		{
			std::cout << "2" << std::endl;
		}
		else if (((a == b) && (a != c) || (b == c) && (b != a)) || ((c == a) && (a != b)))//이등변삼각형
		{
			std::cout << "3" << std::endl;
		}
		else
		{
			std::cout << "4" << std::endl; //일반삼각형
		}
	}
	else
	{
		std::cout << "0" << std::endl;//삼각형 x
	}
}

