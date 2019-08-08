#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

class FourMagicSquare
{

public:

	FourMagicSquare();
	FourMagicSquare(int n);
	void Print() const;

private:

	int square[50][50];
	int SizeOfSquare;
	void Make();
	bool Check();
	int tmp[4][4];
};

FourMagicSquare::FourMagicSquare() :SizeOfSquare(0) {}
FourMagicSquare::FourMagicSquare(int n) : SizeOfSquare(n)
{
	Make();
}

void FourMagicSquare::Print() const
{
	for (int i = 0; i < SizeOfSquare; i++)
	{
		for (int j = 0; j < SizeOfSquare; j++)
		{
			std::cout << square[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void FourMagicSquare::Make()
{
	if (SizeOfSquare % 4 == 0) 
	{
		int num = 1;
		for (int i = 0; i < SizeOfSquare; i++)
			for (int j = 0; j < SizeOfSquare; j++)
			{
				square[i][j] = num++;
			}
		for (int i = 0; i < SizeOfSquare; i++)
			for (int j = 0; j < SizeOfSquare; j++)
				if (i % 4 == j % 4 || ((i % 4) + (j % 4) + 1) % 4 == 0)
				{
					square[i][j] = SizeOfSquare*SizeOfSquare + 1 - square[i][j];
				}
	}
	else
	{
		int Odd[50][50];
		int SizeOfOdd = SizeOfSquare / 2;
		int Rows = 0, Cols = SizeOfOdd / 2;
		int num = 1;

		for (int i = 0; i < SizeOfOdd; i++)
			for (int j = 0; j < SizeOfOdd; j++)
			{
				Odd[i][j] = 0;
			}
		Odd[Rows][Cols] = num;

		for (int i = 1; i < SizeOfOdd*SizeOfOdd; i++)
		{
			if (Rows - 1 < 0)
			{
				Rows = SizeOfOdd - 1;
			}
			else
			{
				Rows = Rows - 1;
			}
			if (Cols + 1 > SizeOfOdd - 1)
			{
				Cols = 0;
			}
			else
			{
				Cols = Cols + 1;
			}
			if (Odd[Rows][Cols] == 0) Odd[Rows][Cols] = ++num;
			else
			{
				if (Rows == SizeOfOdd - 1 && Cols == 0)
				{
					Rows = 1; Cols = SizeOfOdd - 1;
					Odd[Rows][Cols] = ++num;
				}
				else
				{
					Rows += 2;Cols -= 1;Odd[Rows][Cols] = ++num;
				}
			}
		}
		for (int i = 0; i < SizeOfOdd; i++)
			for (int j = 0; j < SizeOfOdd; j++)
			{
				if (i < SizeOfOdd / 2 + 1)
				{
					square[2 * i][2 * j + 1] = Odd[i][j] * 4 - 3;
					square[2 * i + 1][2 * j] = Odd[i][j] * 4 - 2;
					square[2 * i + 1][2 * j + 1] = Odd[i][j] * 4 - 1;
					square[2 * i][2 * j] = Odd[i][j] * 4;

					if (i == SizeOfOdd / 2 && j == SizeOfOdd / 2)
					{
						square[2 * i][2 * j] = Odd[i][j] * 4 - 3;
						square[2 * i + 1][2 * j] = Odd[i][j] * 4 - 2;
						square[2 * i + 1][2 * j + 1] = Odd[i][j] * 4 - 1;
						square[2 * i][2 * j + 1] = Odd[i][j] * 4;
					}

				}

				else if (i == SizeOfOdd / 2 + 1)
				{
					square[2 * i][2 * j] = Odd[i][j] * 4 - 3;
					square[2 * i + 1][2 * j] = Odd[i][j] * 4 - 2;
					square[2 * i + 1][2 * j + 1] = Odd[i][j] * 4 - 1;
					square[2 * i][2 * j + 1] = Odd[i][j] * 4;

					if (j == SizeOfOdd / 2)
					{
						square[2 * i][2 * j + 1] = Odd[i][j] * 4 - 3;
						square[2 * i + 1][2 * j] = Odd[i][j] * 4 - 2;
						square[2 * i + 1][2 * j + 1] = Odd[i][j] * 4 - 1;
						square[2 * i][2 * j] = Odd[i][j] * 4;
					}
				}
				else
				{
					square[2 * i][2 * j] = Odd[i][j] * 4 - 3;
					square[2 * i + 1][2 * j + 1] = Odd[i][j] * 4 - 2;
					square[2 * i + 1][2 * j] = Odd[i][j] * 4 - 1;
					square[2 * i][2 * j + 1] = Odd[i][j] * 4;
				}
			}
	}
}

bool FourMagicSquare::Check()
{
	return true;
}

int main()
{
	ifstream fin;
	int TestCase;

	fin.open("input.txt");

	fin >> TestCase;

	while (TestCase--)
	{
		int in;
		fin >> in;

		FourMagicSquare Fsquare(in);
		Fsquare.Print();

	}
	fin.close();
	return 0;
}