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

	int a, b;
	int i, j;
	int X[100][100] = { 0, }, Y[100][100] = { 0, }, Z[100][100] = { 0, };


	fin >> a >> b;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			fin >> X[i][j];
		}
	}

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			fin >> Y[i][j];
		}
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			Z[i][j] = X[i][j] + Y[i][j];
		}
	}

	for (i = 0; i<a; i++) {
		for (j = 0; j<b; j++)
		{
			std::cout << Z[i][j] << ' ';
		}
		std::cout << ' ' << std::endl;
	}


}