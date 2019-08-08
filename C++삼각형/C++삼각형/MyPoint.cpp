#include <cstdlib>
#include "MyPoint.h"

MyPoint::MyPoint()
	:x(0), y(0)
{
}
MyPoint::MyPoint(const int _x, const int _y)
	: x(_x), y(_y)
{
}
MyPoint::MyPoint(const MyPoint & _p)
	: x(_p.getX()), y(_p.getY())
{
}
int MyPoint::getX() const {
	return x;
}
int MyPoint::getY() const {
	return y;
}
int MyPoint::dist2sqr(const MyPoint& p_)const {
	return (x-p_.getX())*(x - p_.getX()) + (y - p_.getY())*(y - p_.getY());
}
bool MyPoint::equal(const MyPoint& p_) const {
	if (x == p_.x || y == p_.y)
		return true;
	else
		return false;
}
