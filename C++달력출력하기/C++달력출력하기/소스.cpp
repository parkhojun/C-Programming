#include <iostream>
#include <fstream>
#include <cstdlib>


void hw(std::ifstream&);
int GetDay(int y, int m);


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

	int a;
	int k, l;
	int y, m, d;
	int x;

	fin >> y >> m;

	std::cout << y << ' ' << m << std::endl;
	d = GetDay(y, m);
	x = 1;

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {

		for (k = 1; k < 7; k++) {
			if (x > 31)break;
			for (l = 0; l < 7; l++) {
				if ((k == 1 && l < d) || x>31) {
					printf("0 ");
				}
				else {
					printf("%d ", x);
					x++;
				}

			}
			printf("\n");
		}
	}
	else if (m == 2) {
		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
			for (k = 1; k < 7; k++) {
				if (x > 29)break;
				for (l = 0; l < 7; l++) {
					if ((k == 1 && l < d) || x>29) {
						printf("0 ");
					}
					else {
						printf("%d ", x);
						x++;
					}
				}
				printf("\n");
			}
		}

		else {

			for (k = 1; k < 7; k++) {
				if (x > 28)break;
				for (l = 0; l < 7; l++) {
					if ((k == 1 && l < d) || x>28) {
						printf("0 ");
					}
					else {
						printf("%d ", x);
						x++;
					}
				}
				printf("\n");
			}
		}

	}
	else {
		for (k = 1; k < 7; k++) {
			if (x > 30)break;
			for (l = 0; l < 7; l++) {
				if ((k == 1 && l < d) || x>30) {
					printf("0 ");
				}
				else {
					printf("%d ", x);
					x++;
				}
			}
			printf("\n");
		}
	}
}


int GetDay(int y, int m) {

	int j;
	int d = 0;

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
	d += 5;
	d = d % 7;

	return d;
}
