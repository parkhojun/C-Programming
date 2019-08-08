#ifndef _MYRATIONAL_H_
#define _MYRATIONAL_H_
#include <iostream>
using namespace std;
class myRational
{
private:
	// 분수는 항상 내부적으로 기약분수로 표현하며, 또한 항상 _den>0 이다. long _num; // numerator
	long _den; // denominator
	long gcd(long m, long n); // 최대공약수
	void reduce();
};
#endif