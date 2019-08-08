
/*************************************************************************
*                                                                        *
* Problem :                                                              *
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

	int j;
	int area, temp, x, y;
	char arrx[100], arry[100];
	int data_num;

	fin >> data_num;

	for (j = 0; j < data_num;j++)
	{
		fin >> x >> y;
		arrx[j] = x; arry[j] = y;
	}
	area = 0;

	for (j = 0; j < data_num-1; j++) {
		area += (arrx[j] + arrx[j + 1]) * (arry[j + 1] - arry[j]);
	}
	area += (arrx[j] + arrx[0]) * (arry[0] - arry[j]);
	if (area < 0) {
		temp = -area;
		std::cout << temp <<' ' <<-1 << std::endl;
	}
	else if (area>0) {
		std::cout << area << ' '<< 1 << std::endl;
	}
	else {

	}

}