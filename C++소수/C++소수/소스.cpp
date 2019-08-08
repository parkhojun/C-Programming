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
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int a, i;
	int cnt = 0;

	fin >> a;

	for (i = 1; i <= a; i++)
	{
		if (a%i == 0) { cnt++; }
	}
	if (cnt == 2) { std::cout << 1 << std::endl; }
	else { std::cout << 0 << std::endl; }

}


