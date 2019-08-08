#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#define MAX_NUM 100

using namespace std;

int Complex[MAX_NUM] = { 0 };
char Complex2[MAX_NUM][MAX_NUM];
int N, cnt = 0;

int dfs(int i, int j)
{
	if ((i < 0) || (j < 0) || (i >= N) || (j >= N) || (Complex2[i][j] != '1'))
		return 0;
	cnt++; Complex2[i][j] = '0';
	dfs(i - 1, j); dfs(i + 1, j); dfs(i, j - 1); dfs(i, j + 1);
}
int main(void)
{
	cin>> N;
	int i, j, k;
	for (i = 0; i<N; i++)	cin>>Complex2[i];
	for (k = (i = 0); i<N; i++)
	{
		for (j = 0; j<N; j++)
		{
			if (Complex2[i][j] == '1')
			{
				cnt = 0;
				dfs(i, j);
				Complex[k++] = cnt;
			}
		}
	}
	sort(Complex, Complex + k);
	cout << k << endl;
	for (i = 0; i < k; i++)
		cout <<Complex[i]<< endl;
}
