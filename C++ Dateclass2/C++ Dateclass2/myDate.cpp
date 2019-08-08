#include "myDate.h"

myDate::myDate(int year, int month, int day)
	:Year(year), Month(month), Day(day) {}
// Accessor functions (접근자)
int myDate::getDayOfMonth() const { return Day; }
int myDate::getMonth() const { return Month; }
int myDate::getYear() const { return Year; }
// Mutator functions (변경자)
void myDate::setDayOfMonth(int day) { Day = day; }
void myDate::setMonth(int month) { Month = month; }
void myDate::setYear(int year) { Year = year; }
void myDate::setDate(int year, int month, int day) { Day = day; Month = month; Year = year; }
// utility functions
bool myDate::isLeapYear() const { return ((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0); } //윤년
bool myDate::isLeapYear(int y) const { return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0); } //윤년


int myDate::getDayOfWeek() const {
	int Year1[2] = { 365,366 };
	int days = 4;

	for (int y = 1582; y < Year; y++)
	{
		days += Year1[isLeapYear(y)];
	}
	return (days + getDayOfYear()) % 7;
} //0=Sunday, 1=Monday, ..., 6=Saturday
int myDate::getDayOfWeek(int mon, int day) const {

	int Year1[2] = { 365,366 };
	int Month1[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int Month2[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int days = day + 4;

	if (isLeapYear())
	{
		for (int m = 1; m < mon; m++)
		{
			days += Month1[m - 1];
		}
	}
	else
	{
		for (int m = 1; m < mon; m++)
		{
			days += Month2[m - 1];
		}
	}
	for (int y = 1582; y < Year; y++)
	{
		days += Year1[isLeapYear(y)];
	};

	return days % 7;
}
int myDate::getDayOfYear() const {
	int Month1[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int Month2[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int days = Day;

	if (isLeapYear())
	{
		for (int m = 1; m < Month; m++)
		{ days += Month1[m - 1]; }
	}
	else
	{
		for (int m = 1; m < Month; m++)
		{
			days += Month2[m - 1];
		}
	}
	return days;
}
int myDate::getNumHolidays() const {
	int cnt = 104;
	char Holi[15];
	Holi[0] = getDayOfWeek(1, 1);Holi[1] = getDayOfWeek(2, 1);
	Holi[2] = getDayOfWeek(2, 2);Holi[3] = getDayOfWeek(2, 3);
	Holi[4] = getDayOfWeek(3, 1);Holi[5] = getDayOfWeek(5, 5);
	Holi[6] = getDayOfWeek(5, 15);Holi[7] = getDayOfWeek(6, 6);
	Holi[8] = getDayOfWeek(7, 17);Holi[9] = getDayOfWeek(8, 15);
	Holi[10] = getDayOfWeek(9, 15);Holi[11] = getDayOfWeek(9, 16);
	Holi[12] = getDayOfWeek(9, 17);Holi[13] = getDayOfWeek(10, 3);
	Holi[14] = getDayOfWeek(12, 25);
	for (int i = 0; i < 15; i++)
	{
		if (Holi[i] != 0 && Holi[i] != 6)
		{
			cnt += 1;
		}
	}
	if (getDayOfWeek(1, 1) == 6) {
		cnt += 1;
		if (isLeapYear())
		{
			cnt += 1;
		}
	}
	else if (getDayOfWeek(1, 1) == 0)
	{
		cnt += 1;
	}
	else if (isLeapYear() && getDayOfWeek(1, 1) == 5)
	{
		cnt += 1;
	}

	return cnt;
}//휴일수 계산