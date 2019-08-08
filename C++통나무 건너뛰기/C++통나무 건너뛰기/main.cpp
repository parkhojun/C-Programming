#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {

	int i,j, n,TestCase;
	int arr[10001];
	
	cin >> TestCase;

	for (j = 0; j < TestCase; j++) {
		cin >> n;
		for (i = 0; i < n; i++)
		{ cin >> arr[i]; }
		sort(arr, arr + n);
		int number = 0;
		for (i = 2; i < n; i++)
		{ number = max(number, arr[i] - arr[i - 2]); }
		cout << number << endl;
		/*if (number > 0) { cout << number << endl; }
		else if (number < 0) { number = number*-1;  cout << number << endl;}*/
	}
	return 0;
}
