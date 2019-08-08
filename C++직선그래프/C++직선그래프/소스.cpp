/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                         ���� �׷���                                    *
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
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

	int a;
	int i, j;
	char arr[100][100];

	fin >> a;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			if ((i == a / 2) && (j == a / 2))
				arr[i][j] = 'O';
			else if ((a-1) - i == j)
				arr[i][j] = '*';
			else if (i == a / 2)
				arr[i][j] = '+';
			else if (j == a / 2)
				arr[i][j] = 'I';
			else
				arr[i][j] = '.';
		}
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			std::cout << arr[i][j];
		}
		std::cout << ' ' << std::endl;
	}

}

