/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                  �� ���� ��� ���� �� ���ϱ�                           *
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


void hw_5(std::ifstream&);


int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// ���� ����

	fin >> num;

	for (i = 0; i < num; i++)// ���̽� �ݺ��ϱ�
	{

		hw_5(fin);

	}
	fin.close();

	return 0;
}

void hw_5(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

	int start_num;
	int end_num;
	int i;

	fin >> start_num >> end_num;

	int sum = 0;
	for (i = start_num; i <= end_num; i++)
	{
		sum += i;
	}
	std::cout << sum << std::endl;
}