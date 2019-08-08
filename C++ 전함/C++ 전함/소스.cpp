#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void)
{
	int Case, tmp=0;
	int n, k, l, x1, y1, x2, y2, w, a, b, c, d;
	int *arr;

	cin >> Case;

	while (Case--)
	{
		cin >> n >> k >> l >> x1 >> y1 >> x2 >> y2 >> w >> a >> b >> c >> d;
		arr = (int*)malloc(sizeof(int)*n);
		for (int i = 0; i < n; i++)
		{
			if (a == (x1 || y1 || x2 || y2)) arr[i] = w;
			if (b == (x1 || y1 || x2 || y2)) arr[i] = w;
			if (c == (x1 || y1 || x2 || y2)) arr[i] = w;
			if (d == (x1 || y1 || x2 || y2)) arr[i] = w;
		}
		sort(arr, arr + n);
		if (arr[0] > tmp) tmp = arr[0];
		cout << tmp << endl;
	}


}