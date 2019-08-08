#include <iostream>
#include <fstream>
#include <cstdlib>


void hw(std::ifstream&);


int main(void) {

	std::ifstream fin;


	int num, i;

	fin.open("input.txt");// 파일 열기

	fin >> num;

	for (i = 0; i < num; i++)// 케이스 반복하기
	{
		hw(fin);
		//std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


void hw(std::ifstream& fin) {// 파일 실체, 주소값 불러오기

	int a;
	int j,k;
	int data, data2;
	int *arr;
	int temp;

	fin >> a;
	arr = (int *)malloc(sizeof(int)*a);

	for (j = 0; j < a; j++)/*받는숫자의 갯수만큼 실행*/
	{
		fin >> data;

		arr[j] = data;
	}/*받는숫자의 갯수만큼 실행 끝부분*/
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


