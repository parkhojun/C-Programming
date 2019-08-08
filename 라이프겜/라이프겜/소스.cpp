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

void hw(ifstream& fin)
{
	int n, m, Gen, cnt, temp1, temp2, Row_Cnt, Other_Board[8][2];
	char Board1[MAX_SIZE][MAX_SIZE], Board2[MAX_SIZE][MAX_SIZE];
	Other_Board[0][0] = -1; Other_Board[0][1] = -1; Other_Board[1][0] = -1; Other_Board[1][1] = 0;
	Other_Board[2][0] = -1; Other_Board[2][1] = 1; Other_Board[3][0] = 0; Other_Board[3][1] = -1;
	Other_Board[4][0] = 0; Other_Board[4][1] = 1; Other_Board[5][0] = 1; Other_Board[5][1] = -1;
	Other_Board[6][0] = 1; Other_Board[6][1] = 0; Other_Board[7][0] = 1; Other_Board[7][1] = 1;
	fin >> m >> n >> Gen;
	for (int i = 0; i<m; i++) fin >> Board1[i];
	while (Gen--)
	{
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				cnt = 0;
				for (int k = 0; k<8; k++)
				{
					temp1 = (Other_Board[k][0] + i);
					temp2 = (Other_Board[k][1] + j);
					if (temp1 >= 0 && temp1<m)
					{
						if (temp2 >= 0 && temp2 < n)
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
		for (int x = 0; x<m; x++)
		{
			for (int y = 0; y<n; y++) Board1[x][y] = Board2[x][y];
		}
	}
	Row_Cnt = 0;
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n; j++) { if (Board1[i][j] == 'O')  Row_Cnt++; }
	}
	cout << Row_Cnt << endl;
	for (int i = 0; i<m; i++) cout << Board1[i] << endl;

}

