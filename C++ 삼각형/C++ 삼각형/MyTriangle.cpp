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
	
	return true;
}
// test if p is on the boundary of a triangle
bool MyTriangle::isOnBoundary(const MyPoint& p) const
{
	MyLineSegment s1(p1, p2), s2(p2, p3), s3(p3, p1);
	
	return true;
}
// test if p is outside of a triangle
bool MyTriangle::isOutside(const MyPoint& p) const
{
	if (isInside(p) || isOnBoundary(p))
		return false;
	else
		return true;
}
// positive area of triangle p1, p2, p
int MyTriangle::getArea2() const
{
	return abs(area2());
}
// return type of a triangle
MyTriangle::TriangleType1 MyTriangle::getType1() const
{
	int a = p1.dist2sqr(p2), b = p2.dist2sqr(p3), c = p3.dist2sqr(p1);
	int tmp;
	if (a > b) { tmp = a; a = b; b = a; }
	if (a > c) { tmp = a; a = c; c = a; }
	if (b > c) { tmp = b; b = c; c = b; }
	TriangleType1 type;
	if (getArea2() == 0)
		type = NONTRIANGLE;
	else if ((a == b) && (b == c))
		type = EQUILATERAL;
	else if ((a*a) == (b*b) + (c*c))
		type = RIGHTTRIANGLE;
	else if (((a==b)&&(b==c))&&(b==a))
		type = ISOSCELES;
	else
		type = SCALENE;

	return type;
}
// return type of a triangle
MyTriangle::TriangleType2 MyTriangle::getType2() const
{
	int a = p1.dist2sqr(p2), b = p2.dist2sqr(p3), c = p3.dist2sqr(p1);
	TriangleType2 type;
	if (a==b)
		type = NOT_A_TRIANGLE;
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