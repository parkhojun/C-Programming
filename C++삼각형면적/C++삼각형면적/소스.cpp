
/*************************************************************************
*                                                                        *
* Problem :         �ﰢ�� ����                                          *
*                                                                        *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                        *
* 20153183 ��ȣ��                                                        *
*                                                                        *
*************************************************************************/

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
		std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����


	int a1, a2, b1, b2, c1, c2;
	int area;
	int temp;

	fin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	area = ((b1 - a1)*(c2 - a2) - (c1 - a1)*(b2 - a2));
	temp = 1;
	if (area < 0) {
		temp = -area;
		std::cout << temp <<' ';
	}
	else if (area > 0) {
		std::cout << area << ' ';
	}
	else {
		std::cout << 0 << ' ';
	}
	if (area > 0) {
		std::cout << 1 << ' ';
	}
	else if (area < 0) {
		std::cout << -1 << ' ';
	}
	else {
		std::cout << 0 << ' ';
	}


}