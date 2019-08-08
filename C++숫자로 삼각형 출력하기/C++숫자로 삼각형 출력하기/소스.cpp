/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                  ���ڷ� �ﰢ�� ���ϱ�                                  *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                        *
* 20153183 ��ȣ��                                                        *
*                                                                        *
*************************************************************************/

#define _crt_secure_no_warnings
#include <iostream>
#include <fstream>


void hw_10(std::ifstream&);
int calc_elem(int i, int j, int k);


int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// ���� ����

	fin >> num;

	for (i = 0; i < num; i++)// ���̽� �ݺ��ϱ�
	{

		hw_10(fin);

	}
	fin.close();

	return 0;
}


void hw_10(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

	int k;
	int i,j;

	fin >> k;

	for (i = 0; i < k ; i++)
	{
		for (j = 0; j <= i; j++)
		{
			int elem;
			elem = calc_elem(i+1, j+1, k);
			std::cout <<elem << " ";
		}
		std::cout << std::endl;
	}
}

int calc_elem(int i, int j,int k)
{
	int res = 0;

	res = (j - 1) * k - ((j - 1)*(j - 2) / 2);
	res += (i - j) + 1;

	return res;
}