#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

void hw(std::ifstream&);
using namespace std;

int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// ���� ����

	fin >> num;

	for (i = 0; i < num; i++)// ���̽� �ݺ��ϱ�
	{
		
		unsigned data;

		fin >> data; /*�޴¼��� �ޱ�*/

		printf("%d\n", data);
		
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

	


}
