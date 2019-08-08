#include <cstdlib>
#include "MyTriangle.h"
#include "MyLineSegment.h"

// constructors
MyTriangle::MyTriangle()
	: p1(0, 0), p2(0, 0), p3(0, 0)
{
}
// set p1, p2, p3 be in counterclockwise order
MyTriangle::MyTriangle(const MyPoint& a, const MyPoint& b, const MyPoint& c)
	: p1(a), p2(b), p3(c)
{
	MyLineSegment s(p1, p2);
	if (!s.isLeftSide(p3))
	{
		MyPoint p;
		p = p1;
		p1 = p3;
		p3 = p;
	}
}
MyTriangle::MyTriangle(const MyTriangle& t)
	: p1(t.p1), p2(t.p2), p3(t.p3)
{
}
// test if p is inside of a triangle
bool MyTriangle::isInside(const MyPoint& p) const
{
	MyLineSegment s1(p1, p2), s2(p2, p3), s3(p3, p1);
	return s1.isLeftSide(p) && s2.isLeftSide(p) && s3.isLeftSide(p);
}
// test if p is on the boundary of a triangle
bool MyTriangle::isOnBoundary(const MyPoint& p) const
{
	MyLineSegment s1(p1, p2), s2(p2, p3), s3(p3, p1);
	return s1.isCollinear(p) || s2.isCollinear(p) || s3.isCollinear(p);
}

// positive area of triangle p1, p2, p
int MyTriangle::getArea2() const
{
	return abs(area2());
}
// return type of a triangle
MyTriangle::TriangleType1 MyTriangle::getType1() const
{
	int a = p1.dist2sqr(p2), b = p2.dist2sqr(p3), c = p1.dist2sqr(p3);
	TriangleType1 type;
	if (getArea2() == 0)type = NONTRIANGLE;
	else if (a == b && b == c && c == a)
		type = EQUILATERAL;
	else if (a + b == c || a + c == b || b + c == a)
		type = RIGHTTRIANGLE;
	else if (a == b || b == c || a == c)
		type = ISOSCELES;
	else
		type = SCALENE;
	return type;
}
// return type of a triangle
MyTriangle::TriangleType2 MyTriangle::getType2() const
{
	int a = p1.dist2sqr(p2), b = p2.dist2sqr(p3), c = p1.dist2sqr(p3);
	int tmp;

	if (a < b) { tmp = a; a = b; b = tmp; }
	if (a < c) { tmp = a; a = c; c = tmp; }
	if (b < c) { tmp = b; b = c; c = tmp; }

	TriangleType2 type;
	if (getArea2() == 0) type = NOT_A_TRIANGLE;
	else if (a == (b + c))
		type = RIGHT_TRIANGLE;
	else if (a > b + c)
		type = OBTUSE_TRIANGLE;
	else
		type = ACUTE_TRIANGLE;

	return type;
}
// return twice the (signed) area of triangle p1, p2, p3
int MyTriangle::area2() const
{
	int p1x, p2x, p3x, p1y, p2y, p3y;
	p1x = p1.getX();
	p1y = p1.getY();
	p2x = p2.getX();
	p2y = p2.getY();
	p3x = p3.getX();
	p3y = p3.getY();

	return p1x * p2y - p1y * p2x +
		p1y * p3x - p1x * p3y +
		p2x * p3y - p3x * p2y;
}