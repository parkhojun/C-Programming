#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

void hw(std::ifstream&);
using namespace std;

int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{
		
		unsigned data;

		fin >> data; /*받는숫자 받기*/

		printf("%d\n", data);
		
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	


}
