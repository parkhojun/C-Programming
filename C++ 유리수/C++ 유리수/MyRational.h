#ifndef _MYRATIONAL_H_
#define _MYRATIONAL_H_
#include <iostream>
using namespace std;
class myRational
{
private:
	// �м��� �׻� ���������� ���м��� ǥ���ϸ�, ���� �׻� _den>0 �̴�. long _num; // numerator
	long _den; // denominator
	long gcd(long m, long n); // �ִ�����
	void reduce();
};
#endif