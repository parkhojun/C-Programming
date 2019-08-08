/*************************************************************************
* Problem :               0이 아닌 마지막 자리수                         *
*************************************************************************/

#include <iostream>
#include <fstream>


int main(void) {

	std::ifstream fin;
	int numTestCases;


	fin.open("input.txt");
	fin >> numTestCases;
	for (int i = 0; i < numTestCases; i++)
	{
		int sum, j, k, cnt2, cnt5, cnt10, data_num, no_data;


		fin >> no_data;
		sum = 1; cnt2 = 0; cnt5 = 0;
		for (j = 0; j < no_data; j++)
		{
			fin >> data_num;
			if (sum > 100) {
				sum %= 100;
			}

			while ((data_num % 2 == 0) || (data_num % 5 == 0)) {

				if (data_num % 2 == 0) {
					cnt2++;
					data_num /= 2;
				}
				if (data_num % 5 == 0) {
					cnt5++;
					data_num /= 5;
				}
			}
			data_num %= 10;
			sum *= data_num;
			sum %= 10;
		}

		if (cnt2 > cnt5)
		{
			for (k = 0; k < cnt2 - cnt5; k++) {
				if (sum > 1000) { sum %= 100; }
				sum *= 2;
			}
			cnt10 = cnt5;
		}

		else {
			for (k = 0; k < cnt5 - cnt2; k++) {
				if (sum > 1000) { sum %= 100; }
				sum *= 5;
			}
			cnt10 = cnt2;
		}

		sum %= 10;
		std::cout << sum << ' ' << cnt10;
		std::cout << ' ' << std::endl;
	}
	fin.close();

	return 0;
}


