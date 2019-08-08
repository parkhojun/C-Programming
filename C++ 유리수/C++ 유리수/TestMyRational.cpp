#include <iostream>
#include <fstream>
#include <cstdlib>
#include "myRational.h"
using namespace std;
void testSimpleCase();
void testDataFromFile();
void main()
{
	testSimpleCase();
	testDataFromFile();
}
void testSimpleCase()
{
	myRational frac1(2), frac2(3, 2), frac3(6, 4), frac4(12, 8), frac5, frac6, frac7;
	cout << frac1 << " " << frac2 << " " << frac3 << " "
		<< frac4 << " " << frac5 << endl;
	cout << frac1.getNumerator() << " " << frac1.getDenominator() << endl;
	// Check arithmetic operators
	cout << frac1 * frac2 << " "
		<< frac1 + frac3 << " "
		<< frac2 - frac1 << " "
		<< frac3 / frac2 << endl;
	// Check comparison operators 
	cout << ((frac1 < frac2) ? 1 : 0) << " "
		<< ((frac1 <= frac2) ? 1 : 0) << " "
		<< ((frac1 > frac2) ? 1 : 0) << " "
		<< ((frac1 >= frac2) ? 1 : 0) << " "
		<< ((frac1 == frac2) ? 1 : 0) << " "
		<< ((frac1 != frac2) ? 1 : 0) << " "
		<< ((frac2 < frac3) ? 1 : 0) << " "
		<< ((frac2 <= frac3) ? 1 : 0) << " "
		<< ((frac2 > frac3) ? 1 : 0) << " "
		<< ((frac2 >= frac3) ? 1 : 0) << " "
		<< ((frac2 == frac3) ? 1 : 0) << " "
		<< ((frac2 != frac3) ? 1 : 0) << endl;
	cout << (frac6 = frac3) << " ";
	cout << (frac6 += frac3) << " ";
	cout << (frac6 -= frac3) << " ";
	cout << (frac6 *= frac3) << " ";
	cout << (frac6 /= frac3) << endl;
	cout << -frac6 << endl;
	frac6 = (++frac4) + 2;
	frac7 = 2 + (frac4++);
	cout << frac4 << " " << frac6 << " " << frac7 << endl;
	frac6 = (--frac4) - 2;
	frac7 = 2 - (frac4--);
	cout << frac4 << " " << frac6 << " " << frac7 << endl;
	cout << 2 * frac3 << " " << frac3 * 2 << " "
		<< 2 / frac3 << " " << frac3 / 2 << endl;
}
void testDataFromFile()
{
}