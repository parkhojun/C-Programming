/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                            시간계산                                    *
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

	int w = 0, x = 0, y = 0, z = 0; //시간 계산을 위한 변수 (day , hours, minute, second)
	int i, input;
	int Hour, Minute, Second, hour, minute, second;

	
	fin >> input; // 입력 값 넣기

	for (i = 0; i < input; i++)// 케이스 반복하기
	{
		fin >> Hour >> Minute >> Second >> hour >> minute >> second;

		w += (hour - Hour);
		x += (minute - Minute);
		y += (second - Second);

		if (x < 0) {
			x = 60 + x;
			w--;
		}
		if (y < 0) {
			y = 60 + y;
			x--;
		}
		if (y >= 60) {
			x++;
			y -= 60;
		}
		if (x >= 60) {
			w++;
			x -= 60;
		}
		if (w >= 24) {
			z++;
			w -= 24;
		}

		
	}
	std::cout << z << ' ' << w << ' ' << x << ' ' << y << std::endl;
}
