/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                         ���̾Ƹ�� ���                                *
*                                                                        *
*************************************************************************/
/*************************************************************************
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
		//std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

	int a;
	int i, j;
	char arr[100][100];

	fin >> a;

	for (i = 0; i < (a/2); i++)// ��� +, * ����
	{

		for (j = 0; j < a; j++)
		{
			if ((a / 2 == j) || (j<=(a/2)+i) && (j >= (a / 2) - i))
				arr[i][j] = '+';
			else
				arr[i][j] = '*';

		}
	}

	for (i = 0; i < (a/2); i++)//���̾Ƹ�� ��� ���
	{
		for (j = 0; j < a; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << ' ' << std::endl;
	}


	for (i = (a / 2); i >= 0; i--)// �ϴ� +, * ����
	{

		for (j = 0; j < a; j++)
		{
			if ((a / 2 == j) || (j <= (a / 2) + i) && (j >= (a / 2) - i))
				arr[i][j] = '+';
			else
				arr[i][j] = '*';

		}
	}

	for (i = (a / 2); i >= 0; i--)//���̾Ƹ�� �ϴ� ���
	{
		for (j = 0; j < a; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << ' ' << std::endl;
	}

}

