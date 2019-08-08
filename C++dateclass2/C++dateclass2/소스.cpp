#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;
void hw(ifstream&);

int main(void) {

	ifstream fin;
	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{
		hw(fin);
		cout << ' ' << endl;
	}
	fin.close();

	return 0;
}


void hw(ifstream& fin) {// 파일 실체, 주소값 불러오기

	int y, m, d, tmp, cnt = 0;

	fin >> y >> m >> d;
	tmp = d;
	//////////////////////////////////////////////////////CalcluateDay
	for (int j = 1; j < m; j++) {

		if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12) { tmp += 31; }
		else if (j == 2) {
			if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) { tmp += 29; }
			else { tmp += 28; }
		}
		else { tmp += 30; }
	}
	cout << tmp << ' ';
	//////////////////////////////////////////////////////Holiday
	int totalDay = 0, total = 104;

	for (int i = 1; i < y; ++i)
	{
		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
			totalDay += 366;
		else
			totalDay += 365;
	}
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
	{
		for (int i = totalDay + 1; i < totalDay + 366; i++)
		{
			if ((i % 7 != 0 && i % 7 != 6) && (i == totalDay + 1 || i == totalDay + 61 || i == totalDay + 126 || i == totalDay + 158 || i == totalDay + 199 || i == totalDay + 228 || i == totalDay + 277 || i == totalDay + 360 || (i > totalDay + 31 && i < totalDay + 35) || i == totalDay + 136 || (i > totalDay + 258 && i < totalDay + 262)))
				total++;
		}
	}
	else
	{
		for (int i = totalDay + 1; i < totalDay + 365; i++)
		{
			if ((i % 7 != 0 && i % 7 != 6) && (i == totalDay + 1 || i == totalDay + 60 || i == totalDay + 125 || i == totalDay + 157 || i == totalDay + 198 || i == totalDay + 227 || i == totalDay + 276 || i == totalDay + 359 || (i > totalDay + 31 && i < totalDay + 35) || i == totalDay + 135 || (i > totalDay + 257 && i < totalDay + 261)))
				total++;
		}
	}
	cout << total;
	//////////////////////////////////////////////////////

}


