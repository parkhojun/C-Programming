#include <iostream>
#include <fstream>


using namespace std;
void hw(ifstream&);
using namespace std;

int main(void) {

	ifstream fin;

	int num, i;

	fin.open("input.txt");// ���� ����

	fin >> num;

	for (i = 0; i < num; i++)// ���̽� �ݺ��ϱ�
	{
		hw(fin);
		//cout<< endl;
	}
	fin.close();

	return 0;
}


void hw(ifstream& fin) {// ���� ��ü, �ּҰ� �ҷ�����

	int input;
	int i, j, x, y, z;
	int arr[49][49];

	fin >> input;
	for (i = 0; i < input; i++)
	{
		for (j = 0; j < input; j++)
			arr[i][j] = 0;
	}

	i = 0; j = input / 2; z = 1;
	for (int k = 0; k < (input*input); k++)
	{
		arr[i][j] = z;
		x = i; y = j; z++; i--; j++;
		if (j == input)  j -= input;
		if (i == -1)  i += input; 
		if (arr[i][j] != 0) { i = x + 1; j = y; }
	}

	for (i = 0; i < input; i++)
	{
		for (j = 0; j < input; j++)
			cout << arr[i][j]<<' ';
		cout << endl;
	}

}
