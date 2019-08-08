#include "MyPoint.h"

MyPoint::MyPoint(const int _x, const int _y)
	:x(_x), y(_y)
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
	return 0;
}
bool MyPoint::equal(const MyPoint& p_) const {
	if (x == p_.x || y == p_.y)
		return true;
	else
		return false;
}
//MyPoint& operator==(const MyPoint & p_)
//{
//	if (this.x == p_.x || this.y == p.y)
//		return 1;
//	else
//		return 0;
