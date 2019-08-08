#include <iostream>
#include <cstdio>
#define MAX_SIZE 63

using namespace std;
int arr[MAX_SIZE][MAX_SIZE];

void fibo(int a, int b, int N);

int main(void)
{
	int N, num;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf_s("%1d", &num);
			arr[i][j] = num;
		}
	}
	fibo(0, 0, N);

	return 0;
}

//bool tr() { return true; }
//bool tr2() { return false; }
void fibo(int a, int b, int N)
{
	bool check = true;
	int arr2 = arr[b][a];
	for (int i = b; i < b + N && check; i++)
		for (int j = a; j < a + N && check; j++)
		{
			if (arr2 != arr[i][j])
			{
				check = false;
			}
		}
	if (check) { printf("%d", arr2); }
	else
	{
		printf("(");
		fibo(a, b, N / 2);
		fibo(a + N / 2, b, N / 2);
		fibo(a, b + N / 2, N / 2);
		fibo(a + N / 2, b + N / 2, N / 2);
		printf(")");
	}

}