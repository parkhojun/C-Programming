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

	int a, j, k;
	int data, temp, cnt;
	int arr[101];

	fin >> a;


	for (j = 0; j < a; j++)
	{
		fin >> data;
		arr[j] = data;
	}

	for (j = 0; j < a - 1; j++) {
		for (k = 0; k < a - 1; k++) {

			if (arr[k] > arr[k + 1]) {

				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
	cnt = 1;
	std::cout << arr[0] << ' ';
	for (j = 0; j < a - 1; j++) {

		if (arr[j] == arr[j + 1]) {
			cnt++;
		}
		else {
			std::cout << cnt<< ' ' << arr[j + 1]<< ' ';
			cnt = 1;
		}
	}
	std::cout << cnt << ' ';


}
