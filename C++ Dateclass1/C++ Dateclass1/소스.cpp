#include <iostream>
#include <fstream>
#include <cstdio>

void hw(std::ifstream&);
using namespace std;
void IsLeapYear(int y);

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
void IsLeapYear(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {cout << 1;}
	else	{cout << 0; }
}

void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int y, m, d;
	int i, j, tmp;
	int x = 3;

	while (x--)
	{
		fin >> y >> m >> d;
		tmp = d;
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

		if ((d) % 7 == 0)
		{
			cout << y << ' ' << m << ' ' << tmp << ' ' << endl;
			IsLeapYear(y);
			cout << ' ' << "4" << endl;
		}
		if ((d) % 7 == 1)
		{
			cout << y << ' ' << m << ' ' << tmp << ' ' << endl;
			IsLeapYear(y);
			cout << ' ' << "5" << endl;
		}
		if ((d) % 7 == 2)
		{
			cout << y << ' ' << m << ' ' << tmp << ' ' << endl;
			IsLeapYear(y);
			cout << ' ' << "6" << endl;
		}
		if ((d) % 7 == 3)
		{
			cout << y << ' ' << m << ' ' << tmp << ' ' << endl;
			IsLeapYear(y);
			cout << ' ' << "0" << endl;
		}
		if ((d) % 7 == 4)
		{
			cout << y << ' ' << m << ' ' << tmp << ' ' << endl;
			IsLeapYear(y);
			cout << ' ' << "1" << endl;
		}
		if ((d) % 7 == 5)
		{
			cout << y << ' ' << m << ' ' << tmp << ' ' << endl;
			IsLeapYear(y);
			cout << ' ' << "2" << endl;
		}
		if ((d) % 7 == 6)
		{
			cout << y << ' ' << m << ' ' << tmp << ' ' << endl;
			IsLeapYear(y);
			cout << ' ' << "3" << endl;
		}
	}
}


