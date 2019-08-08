#ifndef _MY_Point_H_
#define _MY_Point_H_

class MyPoint {
private:
	int x;
	int y;
public:
	MyPoint(const int _x, const int _y);
	MyPoint(const MyPoint & _p);
	int getX()const;
	int getY()const;
	int dist2sqr(const MyPoint& p_)const;
	bool equal(const MyPoint& p_)const;


	//MyPoint& operator==(const MyPoint& p_);
};
#endif // _MY_Point_H_