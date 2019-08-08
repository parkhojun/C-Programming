#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
	int i;
	int t, n;
	int	arr[10001];
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n; i++) { cin >> arr[i]; }
		sort(arr, arr + n);
		int res = 0;
		for (i = 2; i < n; i++) { res = max(res, arr[i] - arr[i - 2]); }
		cout << res << endl;
	}
	return 0;
}