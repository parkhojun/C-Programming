#include "MyRational.h"
ostream &operator <<(ostream &outStream, const myRational& r)
{
	if (r._num == 0)
		outStream << 0;
	else if (r._den == 1)
		outStream << r._num;
	else
		outStream << r._num << "/" << r._den << endl;
	return outStream;
}
istream &operator >>(istream &inStream, myRational& r)
{
	inStream >> r._num >> r._den;
	if (r._den == 0)
	{
		r._num = 0;
		r._den = 1;
	}
	r.reduce();
	return inStream;
}
long myRational::gcd(long m, long n)
{
	if (m == n)
		return n;
	else if (m < n)
		return gcd(m, n - m);
	else
		return gcd(m - n, n);
}
void myRational::reduce()
{
	if (_num == 0 || _den == 0)
	{
		_num = 0;
		_den = 1;
		return;
	}
	if (_den < 0)
	{
		_den *= -1;
		_num *= -1;
	}
	if (_num == 1)
		return;
	int sgn = (_num < 0 ? -1 : 1);
	long g = gcd(sgn * _num, _den);
	_num /= g;
	_den /= g;
}