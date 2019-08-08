#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;
void hw(ifstream &fin);

int main() {
	ifstream fin;
	fin.open("input.txt");

	int num;

	fin >> num;

	for (int i = 0; i < num; i++)
	{	hw(fin);	}
	return 0;
}

void hw(ifstream &fin) {

	int num;
	char dot;
	int a, b, c, d;
	int w = 0, x = 0, y = 0, z = 0;
	int A[8], B[8], C[8], D[8], sum1[32];
	int W[8], X[8], Y[8], Z[8], arr[32];
	unsigned int num2;
	unsigned int result1 = 0;

	fin >> num;

	if (num == 1)
	{
		fin >> a >> dot >> b >> dot >> c >> dot >> d;

		for (int i = 7; i >= 0; i--)
		{
			if (a % 2 == 0) { A[i] = 0; }
			else { A[i] = 1; }a = a / 2;
			if (b % 2 == 0) { B[i] = 0; }
			else { B[i] = 1; }b = b / 2;
			if (c % 2 == 0) { C[i] = 0; }
			else { C[i] = 1; }c = c / 2;
			if (d % 2 == 0) { D[i] = 0; }
			else { D[i] = 1; }d = d / 2;
		}
		for (int i = 0; i < 8; i++)
		{
			sum1[i] = A[i];
			sum1[i + 8] = B[i];
			sum1[i + 16] = C[i];
			sum1[i + 24] = D[i];
		}

		for (int i = 0; i < 32; i++) { if (sum1[i] == 1) { result1 += sum1[i] * pow(2, 31 - i); } }
		cout << result1 << endl;
	}

	else
	{
		fin >> num2;
		for (int i = 31; i >= 0; i--)
		{
			if (num2 % 2 == 0) { arr[i] = 0; }
			else { arr[i] = 1; }
			num2 = num2 / 2;
		}

		for (int i = 0; i < 8; i++)
		{
			W[i] = arr[i];
			X[i] = arr[i + 8];
			Y[i] = arr[i + 16];
			Z[i] = arr[i + 24];
		}

		for (int i = 0; i < 8; i++)
		{
			w += (W[i] * pow(2, 7 - i));
			x += (X[i] * pow(2, 7 - i));
			y += (Y[i] * pow(2, 7 - i));
			z += (Z[i] * pow(2, 7 - i));
		}

		cout << w << '.' << x << '.' << y << '.' << z << endl;
	}
}





