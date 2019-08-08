#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void hw(ifstream&);
using namespace std;

int main(void) {

	ifstream fin;
	int Case;

	fin.open("input.txt");// 파일 열기

	fin >> Case;

	while (Case--)
	{
		hw(fin);
		cout << ' ' << endl;
	}
	fin.close();

	return 0;
}


void hw(ifstream& fin) {// 파일 실체, 주소값 불러오기

	int x1, y1, x2, y2;
	int A, B, C, D;

	fin >> x1 >> y1 >> x2 >> y2;

	if ((x1 == x2) && (y1 == y2)) { cout << 1 << ' '; }
	else { cout << 0 << ' '; }
	A = ((x1 - x2) * (x1 - x2))+((y1 - y2) * (y1 - y2));
	B = abs((x1 - x2)) + abs((y1 - y2));
	C = ((x1 - y1) * (x1 - y1)) + ((y1 - x1) * (y1 - x1));
	D = abs((x1 - y1)) + abs((y1 - x1));
	cout << A << ' ' << B << ' ' << C << ' ' << D << ' ';
}