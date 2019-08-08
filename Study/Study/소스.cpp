#include<iostream>

//함수 선언

using namespace std;
int swap(int& a, int& b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;

	return 0;
}

void main()
{
	int a = 10, b = 20;
	//함수 호출
	swap(a, b);
	cout << a << ',' << b << endl;
}