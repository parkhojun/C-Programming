#include<iostream>

//�Լ� ����

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
	//�Լ� ȣ��
	swap(a, b);
	cout << a << ',' << b << endl;
}