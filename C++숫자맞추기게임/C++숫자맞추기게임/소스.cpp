#include <iostream>
#include <fstream>
#include <vector>

void in(std::ifstream&);
void makearr(std::vector<int>&, int);

int main()
{
	int   no_cases;
	int i;
	std::ifstream   fin;

	fin.open("input.txt");
	fin >> no_cases;
	for (i = 0; i<no_cases; ++i)
		in(fin);
	fin.close();
	return 0;
}

void in(std::ifstream& fin) {
	int   no_data;
	int   j, k, l;
	int x, S, s, B, b, a;
	int arr[10000], X[4], Y[4];

	fin >> no_data;
	a = 10000;
	for (k = 0; k < 10000; k++) {
		arr[k] = k;
	}

	for (l = 0; l < no_data; l++)
	{
		fin >> x >> S >> B;
		X[0] = x / 1000;
		X[1] = (x / 100) % 10;
		X[2] = (x / 10) % 10;
		X[3] = x % 10;

		for (k = 0; k < 10000; k++) {
			if (arr[k] != 10000) {
				s = 0; b = 0;
				Y[0] = k / 1000;
				Y[1] = (k / 100) % 10;
				Y[2] = (k / 10) % 10;
				Y[3] = k % 10;

				int ar[4] = { 0,0,0,0 };
				for (j = 0; j < 4; j++) {
					if (X[j] == Y[j]) { s++; Y[j] = 99; ar[j] = 1; }

				}
				for (j = 0; j < 4; j++) {
					if (ar[j] == 0) {
						if (X[j] == Y[0]) { b++; Y[0] = 99; }
						else if (X[j] == Y[1]) { b++; Y[1] = 99; }
						else if (X[j] == Y[2]) { b++; Y[2] = 99; }
						else if (X[j] == Y[3]) { b++; Y[3] = 99; }
					}
				}
				if (B != b || S != s) { arr[k] = 10000; a--; }
			}
		}
	}
	if (a == 1) {
		for (j = 0; j < 10000; j++) {
			if (arr[j] != 10000) {
				std::cout << arr[j] << std::endl;
			}
		}
	}
	else if (a <= 0)
		std::cout << -2 << std::endl;
	else if (a >= 2)
		std::cout << -1 << std::endl;
}