#include <iostream>
#include <fstream>


void hw(std::ifstream&);


int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// ���� ����

	fin >> num;

	for (i = 0; i < num; i++)// ���̽� �ݺ��ϱ�
	{
		hw(fin);
		//std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

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