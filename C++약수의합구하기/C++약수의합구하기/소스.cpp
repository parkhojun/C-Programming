/*************************************************************************
* Problem :         약수의합 20153183박호준                              *
*************************************************************************/

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

	int a, j;
	int cnt, sum;

	fin >> a;

	sum = 1;//약수에 모두 1이 포함되므로 1로 초기화
	cnt = 1;//약수에 모두 1이 포함되므로 카운트도 1부터 시작

	for (j = 2; j*j <= a; j++) {//1을 모두 포함시키니 j=2부터 시작
									  //제곱수로 해서 시작하면 프로그램 시간절약 가능
		if (a%j == 0) {         // a 나누기j의 나머지가 0일때
			cnt += 2;                 //카운트는 2씩 증가(j,그리고 a나누기j 카운트 모두 더해줘야함
			sum = j + sum + (a / j); //기존의 sum과 j,그리고 a값 나누기j 값을 모두 더해줘야 약수의 합이 나옴.
		}

	}
	std::cout << cnt << ' ' << sum;
}
