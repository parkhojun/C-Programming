#include <iostream>
#include <fstream>

void hw(std::ifstream&);


int main(void) {

	std::ifstream fin;

	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{
		hw(fin);
		std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int a, j, k, data, temp, cnt1, cnt2, i;
	int arr1[101] = { 0 };//숫자 저장 행렬
	int arr3[101] = { 0 };
	int arr4[101] = { 0 };

	fin >> a;

	for (j = 0; j < a; j++)
	{
		fin >> data;
		arr1[j] = data;
	}

	//숫자
	for (j = 0; j < a - 1; j++) {
		for (k = 0; k < a - 1; k++) {

			if (arr1[k] > arr1[k + 1]) {

				temp = arr1[k];
				arr1[k] = arr1[k + 1];
				arr1[k + 1] = temp;
			}
		}
	}
	cnt1 = 0; cnt2 = 1;
	for (j = 0; j <= a - 1; j++)
	{
		if (arr1[j] != arr1[j + 1] || j == a - 1)
		{
			arr3[cnt1] = arr1[j];
			arr4[cnt1] = cnt2;
			cnt1++;
			cnt2 = 1;
		}
		else
		{
			cnt2++;
		}
	}


	for (j = 0; j < a - 1; j++) {
		for (k = 0; k < a - 1; k++) {

			if (arr4[k] < arr4[k + 1]) {

				temp = arr4[k];
				arr4[k] = arr4[k + 1];
				arr4[k + 1] = temp;
				temp = arr3[k];
				arr3[k] = arr3[k + 1];
				arr3[k + 1] = temp;
			}
		}
	}

	i = 0;
	while (arr4[i] == arr4[i + 1])
	{
		i++;
	}


	std::cout << i + 1 << ' ' << arr4[0] << ' ';

	for (j = 0; j <= i; j++) {
		std::cout << arr3[j] << ' ';

	}


}