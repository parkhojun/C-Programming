#include <iostream>

using namespace std;
#define MIN(a,b) ((a < b) ? a : b)

int main(void)
{
	int nCase;
	cin >> nCase;
	int **arr = NULL;
	arr = new int*[3];
	for (int i = 0; i < 3; i++)
		arr[i] = new int[nCase];
	for (int i = 0; i < nCase; i++)
	{
		cin >> arr[0][i] >> arr[1][i] >> arr[2][i];
		if (i == 0)
			continue;
		arr[0][i] += MIN(arr[1][i - 1], arr[2][i - 1]);
		arr[1][i] += MIN(arr[0][i - 1], arr[2][i - 1]);
		arr[2][i] += MIN(arr[0][i - 1], arr[1][i - 1]);
	}
	int result = MIN(MIN(arr[0][nCase - 1], arr[1][nCase - 1]), arr[2][nCase - 1]);
	cout << result << endl;

	delete(arr);
	return 0;

}