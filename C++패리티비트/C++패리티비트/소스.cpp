#include <iostream>
#include <fstream>
#include<cmath>


void hw(std::ifstream&);


int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// ���� ����

	fin >> num;

	for (i = 0; i < num; i++)// ���̽� �ݺ��ϱ�
	{
		hw(fin);
		std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

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
