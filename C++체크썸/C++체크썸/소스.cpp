#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

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
		hw(fin);
		std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int A, B, C, D;
	long long X;

	fin >> X;

	vector<int> num_1;
	int i = 0;
	while (i != 8) { num_1.push_back(X % 2); X /= 2; i++;}
	vector<int> num_2;
	i = 0;
	while (i != 8) { num_2.push_back(X % 2); X /= 2; i++;}
	vector<int> num_3;
	i = 0;
	while (i != 8) { num_3.push_back(X % 2); X /= 2; i++;}
	vector<int> num_4;
	i = 0;
	while (i != 8) { num_4.push_back(X % 2); X /= 2; i++;}

	A = 0; B = 0; C = 0; D = 0;

	for (i = 1; i < 9; i++) { A = A + (pow(2, i - 1) * num_1[i - 1]); }
	for (i = 1; i < 9; i++) { B = B + (pow(2, i - 1) * num_2[i - 1]); }
	for (i = 1; i < 9; i++) { C = C + (pow(2, i - 1) * num_3[i - 1]); }
	for (i = 1; i < 9; i++) { D = D + (pow(2, i - 1) * num_4[i - 1]); }

	i = B + C + D;

	while (1){ if (i > 255) { i -= 256; } else { break; } }
	if (i + A != 255) { cout << 0; }
	else { cout << 1; }


}
