#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int MaxLoveliness(int num);

int comparisonFunctionInt(const void *a, const void *b);

int main(int num1, char *num2[])
{
	int CaseNum, num;
	cin >> CaseNum;
	while (CaseNum--)
	{
		cin >> num;
		cout << MaxLoveliness(num) << endl;
	}
}

int MaxLoveliness(int num)
{
	int arr[10] = { 0 };
	int* loveliness = new int[num];
	int digit;
	for (int x = 1; x <= num; x++)
	{
		int   reverse = 0;
		int n = x;
		for (int i = 9; i >= 0; i--)
		{
			arr[i] = n / pow(10, i);
			n %= (int)pow(10, i);
		}
		for (int i = 9; i >= 0; i--)
		{
			if (arr[i] != 0)
			{
				digit = i;
				break;
			}
		}
		for (int i = digit; i >= 0; i--)
			reverse += (9 - arr[i])*pow(10, i);
		loveliness[x - 1] = reverse * x;
	}
	qsort(loveliness, num, sizeof(arr[0]), comparisonFunctionInt);

	return loveliness[num - 1];
}
int comparisonFunctionInt(const void *a, const void *b) {

	if (*(int*)a <  *(int*)b)
		return -1;
	if (*(int*)a == *(int*)b)
		return  0;

	return 1;
}