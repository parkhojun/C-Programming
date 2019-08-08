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

	int a, b, c, sum;
	int i, j, k;
	int X[100][100] = { 0, }, Y[100][100] = { 0, }, Z[100][100] = { 0, };


	fin >> a >> b >> c;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			fin >> X[j][i];
		}
	}

	for (i = 0; i < b; i++)
	{
		for (j = 0; j < c; j++)
		{
			fin >> Y[j][i];
		}
	}

	for (i = 0; i<a; i++) {
		for (j = 0; j<c; j++) {
			sum = 0;
			for (k = 0; k<b; k++) {
				sum += X[k][i] * Y[j][k];
			}
			Z[i][j] = sum;
		}
	}

	for (i = 0; i<a; i++) {
		for (j = 0; j<c; j++)
		{
			std::cout << Z[i][j] << ' ';
		}
		std::cout << ' ' << std::endl;
	}
	

}


