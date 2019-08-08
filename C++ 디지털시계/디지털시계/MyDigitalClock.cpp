#include <iomanip>
#include <cstdlib>
#include "MyDigitalClock.h"
// constructors
MyDigitalClock::MyDigitalClock(int h, int m, bool ap)
	:hour(h), min(m), am_pm(ap)
{
}
MyDigitalClock::MyDigitalClock(char clock[])
{
	char Hour[2], Min[2];
	bool ap;

	for (int i = 0; i < 2; i++) {Hour[i] = clock[i];}
	this->hour = atoi(Hour);

	for (int i = 0; i < 2; i++){Min[i] = clock[i + 3];}
	this->min = atoi(Min);

	if (clock[5] == 'P'){ap = true;}
	else {ap = false;}
	this->am_pm = ap;
}
MyDigitalClock MyDigitalClock::tick()
{
	++min;
	if (min == 60) { hour++; min = 0; }
	if (hour == 13){ hour = 1; }
	if (hour == 12 && min == 0){ am_pm = !am_pm; }

	return *this;
}
MyDigitalClock MyDigitalClock::untick()
{
	--min;
	if (min == -1) { hour--; min = 59; }
	if (hour == 0) { hour = 12; }
	if (hour == 11 && min == 59) { am_pm = !am_pm; }

	return *this;
}
MyDigitalClock MyDigitalClock::operator ++()
{
	return tick();
}
MyDigitalClock MyDigitalClock::operator ++(int)
{
	MyDigitalClock c = *this;
	tick();
	return c;
}
MyDigitalClock MyDigitalClock::operator --()
{
	return untick();
}
MyDigitalClock MyDigitalClock::operator --(int)
{
	MyDigitalClock c = *this;
	untick();
	return c;
}
ostream& operator<<(ostream& oStream, const MyDigitalClock& c)
{
	oStream << setfill('0') << setw(2) << c.hour
		<< ':' << setw(2) << c.min;
	if (!c.am_pm)
		oStream << "AM";
	else
		oStream << "PM";
	oStream << endl;
	return oStream;
}