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
		std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int y, m, d;
	int j;

	fin >> y >> m >> d;

	for (j = 1582; j < y; j++) {
		if (((j % 4 == 0) && (j % 100 != 0)) || (j % 400 == 0)) {
			d += 366;
		}
		else {
			d += 365;
		}
	}
	for (j = 1; j < m; j++) {

		if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12) { d += 31; }
		else if (j == 2) {
			if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) { d += 29; }
			else { d += 28; }
		}
		else { d += 30; }
	}

	if ((d) % 7 == 0) { printf("4"); }
	if ((d) % 7 == 1) { printf("5"); }
	if ((d) % 7 == 2) { printf("6"); }
	if ((d) % 7 == 3) { printf("0"); }
	if ((d) % 7 == 4) { printf("1"); }
	if ((d) % 7 == 5) { printf("2"); }
	if ((d) % 7 == 6) { printf("3"); }

}


