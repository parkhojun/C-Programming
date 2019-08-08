#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>

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

	string str;
	int A[1000] = { 0, };
	int B[1000] = { 0, };
	char C[1000] = { 0, };
	int input, input2;
	int sum = 0;

	fin >> input;
	fin >> str;
	fin >> input2;

	for (unsigned int i = 0; i < str.length(); i++)
	{
		if (str[i] == '0') { A[str.length() - i-1] = 0;}
		else if (str[i] == '1') { A[str.length() - i-1] = 1;}
		else if (str[i] == '2') { A[str.length() - i-1] = 2;}
		else if (str[i] == '3') { A[str.length() - i-1] = 3;}
		else if (str[i] == '4') { A[str.length() - i-1] = 4;}
		else if (str[i] == '5') { A[str.length() - i-1] = 5;}
		else if (str[i] == '6') { A[str.length() - i-1] = 6;}
		else if (str[i] == '7') { A[str.length() - i-1] = 7;}
		else if (str[i] == '8') { A[str.length() - i-1] = 8;}
		else if (str[i] == '9') { A[str.length() - i-1] = 9;}
		else if (str[i] == 'a') { A[str.length() - i-1] = 10;}
		else if (str[i] == 'b') { A[str.length() - i-1] = 11;}
		else if (str[i] == 'c') { A[str.length() - i-1] = 12;}
		else if (str[i] == 'd') { A[str.length() - i-1] = 13;}
		else if (str[i] == 'e') { A[str.length() - i-1] = 14;}
		else if (str[i] == 'f') { A[str.length() - i-1] = 15;}
	}
	for (int j = 0; j <= str.length(); j++)
	{
		sum += pow(input, j) * A[j];
	}
	int k = 0;
	while (sum!=0)
	{
		B[k] = (sum %input2);
		sum = (sum / input2);
		k++;
	}
	for (int i = 0; i < k; i++)
	{
		if (B[i] == 0) { C[k - i - 1] = '0'; }
		else if (B[i] == 1) { C[k - i - 1] = '1';}
		else if (B[i] == 2) { C[k - i -1] = '2'; }
		else if (B[i] == 3) { C[k - i -1] = '3'; }
		else if (B[i] == 4) { C[k - i -1] = '4'; }
		else if (B[i] == 5) { C[k - i -1] = '5'; }
		else if (B[i] == 6) { C[k - i -1] = '6'; }
		else if (B[i] == 7) { C[k - i -1] = '7'; }
		else if (B[i] == 8) { C[k - i -1] = '8'; }
		else if (B[i] == 9) { C[k - i -1] = '9'; }
		else if (B[i] == 10) { C[k - i -1] = 'a'; }
		else if (B[i] == 11) { C[k - i -1] = 'b'; }
		else if (B[i] == 12) { C[k - i -1] = 'c'; }
		else if (B[i] == 13) { C[k - i -1] = 'd'; }
		else if (B[i] == 14) { C[k - i -1] = 'e'; }
		else if (B[i] == 15) { C[k - i -1] = 'f'; }

	}

	cout << C;
}