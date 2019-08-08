#include <iostream>
#include <fstream>
#include "MyLineSegment.h"
#include "MyPoint.h"

int main(void) {
	std::ifstream fin;
	fin.open("input.txt");

	int Case;
	int X1, Y1, X2, Y2, X3, Y3, X4, Y4;

	fin >> Case;
	while (Case--) {
		fin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
		MyPoint a(X1, Y1);
		MyPoint b(X2, Y2);
		MyLineSegment A(a, b);
		MyPoint c(X3, Y3);
		MyPoint d(X4, Y4);
		MyLineSegment B(c, d);
		if (A.properIntersection(B) && B.properIntersection(A)) { std::cout << "1" << std::endl; }
		else if (A.improperIntersection(B) || B.improperIntersection(A)) { std::cout << "2" << std::endl; }
		else std::cout << "0" << std::endl;
	}
}