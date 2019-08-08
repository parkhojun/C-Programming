#include <iostream>
#include <fstream>
using namespace std;

int R = 6;
int C = 7;

int FourMok(int* arr, int n);
bool win(int* grid, int i, int j);
void Print(int* grid);
int main(int argc, char* argv[])
{
	fstream input("input.txt");
	int nCase;
	input >> nCase;
	while (nCase--)
	{
		int n;
		input >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			input >> arr[i];
			arr[i]--;
		}
		cout << FourMok(arr, n) << endl;
		delete arr;
	}
}

int FourMok(int* arr, int n)
{
	int team1 = 1, team2 = 2;
	int *grid = new int[R*C];
	for (int i = 0; i < R*C; i++)
		grid[i] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int cnt = 0; cnt < R; cnt++) {
			if (*(grid + cnt * C + arr[i]) == 0) {
				if (i % 2 == 0)
					*(grid + cnt * C + arr[i]) = team1;
				else if (i % 2 != 0)
					*(grid + cnt * C + arr[i]) = team2;
				goto stop;
			}
		}
	stop: continue;
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (win(grid, i, j))
			{
				if (*(grid + i * C + j) == team1)
					return 1;
				else if (*(grid + i * C + j) == team2)
					return 2;
			}
		}
	}
	delete grid;
	return 0;
}

bool win(int* grid, int i, int j)
{
	int direc[8][2] = { { 0, -1 },{ 1, -1 },{ 1, 0 },{ 1, 1 },{ 0, 1 },{ -1, 1 },{ -1, 0 },{ -1, -1 } };
	for (int k = 0; k < 8; k++)
	{
		int cnt = 0;
		int temprow = i;
		int tempcol = j;
		for (int h = 0; h < 3; h++)
		{
			temprow += direc[k][0];
			tempcol += direc[k][1];
			if (temprow < 0 || tempcol < 0 || temprow >= R || tempcol >= C)
				goto stop;
			if (*(grid + temprow * C + tempcol) != *(grid + i * C + j))
				goto stop;
			cnt++;
			if (cnt == 3)
				return true;
		}
	stop: continue;
	}
	return false;
}