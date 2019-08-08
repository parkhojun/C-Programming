#include <iostream>
#include <fstream>
#include<cmath>


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

	int a, cnt;
	unsigned int res;

	fin >> a;

	res = a;
	cnt = 0;
	while (a!=0)
	{
		if (a % 2 == 1) { cnt++; }
		a /= 2;
	}
	if (cnt % 2 == 1) { res += pow(2, 31); }
	std::cout << res;

}
