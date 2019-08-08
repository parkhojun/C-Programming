#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#define MAX_SIZE 100

using namespace std;
void hw(ifstream&);

int main(void)
{
	ifstream fin;
	int Case;

	fin.open("input.txt");
	fin >> Case;

	while (Case--)
	{
		hw(fin);
	}
	fin.close();
	return 0;
}
/*
void hw(ifstream& fin)
{
	int Col, Row, Gen, cnt, temp1, temp2, Row_Cnt, Other_Board[8][2];
	char Board1[MAX_SIZE][MAX_SIZE], Board2[MAX_SIZE][MAX_SIZE];
	Other_Board[0][0] = -1; Other_Board[0][1] = -1; Other_Board[1][0] = -1; Other_Board[1][1] = 0;
	Other_Board[2][0] = -1; Other_Board[2][1] = 1; Other_Board[3][0] = 0; Other_Board[3][1] = -1;
	Other_Board[4][0] = 0; Other_Board[4][1] = 1; Other_Board[5][0] = 1; Other_Board[5][1] = -1;
	Other_Board[6][0] = 1; Other_Board[6][1] = 0; Other_Board[7][0] = 1; Other_Board[7][1] = 1;
	fin >> Row >> Col >> Gen;
	for (int i = 0; i<Row; i++) fin >> Board1[i];
	while (Gen--)
	{
		for (int i = 0; i<Row; i++)
		{
			for (int j = 0; j<Col; j++)
			{
				cnt = 0;
				for (int k = 0; k<8; k++)
				{
					temp1 = (Other_Board[k][0] + i);
					temp2 = (Other_Board[k][1] + j);
					if (temp1 >= 0 && temp1<Row)
					{
						if (temp2 >= 0 && temp2 < Col)
							if (Board1[temp1][temp2] == 'O') cnt++; 
					}
				}
				if (Board1[i][j] == 'X')
				{
					if (cnt == 3) { Board2[i][j] = 'O'; }
					else { Board2[i][j] = 'X'; }

				}
				else
				{
					if (cnt<2) { Board2[i][j] = 'X'; }
					else if (cnt>3) { Board2[i][j] = 'X'; }
					else { Board2[i][j] = 'O'; }
				}
			}
		}
		for (int x = 0; x<Row; x++)
		{
			for (int y = 0; y<Col; y++) Board1[x][y] = Board2[x][y];
		}
	}
	Row_Cnt = 0;
	for (int i = 0; i<Row; i++)
	{
		for (int j = 0; j<Col; j++) { if (Board1[i][j] == 'O')  Row_Cnt++; }
	}
	cout << Row_Cnt << endl;
	for (int i = 0; i<Row; i++) cout << Board1[i] << endl;

}
*/
void hw_22(ifstream& fin)
{

	int  m, n, gen;

	char life[100][100];
	char temp[100][100];
	int vert[] = { -1,-1,0,1,1,1,0,-1 };
	int horz[] = { 0,1,1,1,0,-1,-1,-1 };



	fin >> m >> n >> gen;

	for (int j = 0; j < m; j++)
	{
		for (int k = 0; k < n; k++)
		{
			fin >> life[j][k];
		}
	}
	for (int j = 0; j < m; j++)
	{
		for (int k = 0; k < n; k++)
		{
			temp[j][k] = life[j][k];
		}
	}
	for (int n = 0; n < gen; n++)
	{
		int cnt = 0;
		for (int y = 0; y < m; y++)
		{
			for (int x = 0; x < n; x++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (x + vert[j] < 0 || x + vert[j] > n - 1 || y + horz[j] < 0 || y + horz[j] > m - 1)
						continue;
					if (life[y + horz[j]][x + vert[j]] == 'O')
						cnt++;
				}
				if (cnt <= 1 || cnt >= 4)
				{
					temp[y][x] = 'X';
				}
				if ((cnt == 2 || cnt == 3) && temp[y][x] == 'O')
				{
					temp[y][x] = 'O';
				}
				if (cnt == 3 && temp[y][x] == 'X')
				{
					temp[y][x] = 'O';
				}
				cnt = 0;
			}
		}
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				life[j][k] = temp[j][k];
			}
		}
	}
	int count = 0;
	for (int j = 0; j < m; j++)
	{
		for (int k = 0; k < n; k++)
		{
			if (temp[j][k] == 'O')
				count++;
		}
	}
	cout << count << endl;
	for (int j = 0; j < m; j++)
	{
		for (int k = 0; k < n; k++)
			cout << temp[j][k];
		cout << endl;
	}

}
