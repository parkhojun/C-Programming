#include <iostream>
#include <fstream>
#include <cstdlib>


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
	int j,k;
	int data, data2;
	int *arr;
	int temp;

	fin >> a;
	arr = (int *)malloc(sizeof(int)*a);

	for (j = 0; j < a; j++)/*�޴¼����� ������ŭ ����*/
	{
		fin >> data;

		arr[j] = data;
	}/*�޴¼����� ������ŭ ���� ���κ�*/
	fin >> data2;
	printf("%d ", a - data2 + 1);
	for (j = 0; j < a - data2 + 1; j++) {
		temp = 0;
		for (k = 0; k < data2; k++) {

			temp += arr[k + j];
		}
		temp /= data2;
		printf("%d ", temp);
	}

	printf("\n");
	free(arr);
}


