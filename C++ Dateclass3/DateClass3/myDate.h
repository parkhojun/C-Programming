#ifndef _MYDATE_H_
#define _MYDATE_H_
#include <iostream>
using namespace std;
class myDate {
public:
	// Constructor (������)
	myDate(int year = 1582, int month = 1, int day = 1)
		: y(year), m(month), d(day)
	{}
	// Accessor functions (������)
	int getDayOfMonth() const {
		return d;
	}
	int getMonth() const {
		return m;
	}
	int getYear() const {
		return y;
	}
	// Mutator functions (������)
	void setDayOfMonth(int day) {
		d = day;
	}
	void setMonth(int month) {
		m = month;
	}
	void setYear(int year) {
		y = year;
	}
	void setDate(int year, int month, int day) {
		y = year;
		m = month;
		d = day;
	}
	// utility functions 
	bool isLeapYear() const { //����
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			return true;
		else
			return false;
	}
	int getDayOfWeek() const {//0=Sunday, 1=Monday, ..., 6=Saturday
		int day = 0;
		int answer;

		for (int i = 1582; i < y; i++) {
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
				day = day + 366;
			else
				day = day + 365;
		}

		for (int i = 1; i < m; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
				day += 31;
			else if (i == 2) {
				if (isLeapYear() == true)
					day += 29;
				else
					day += 28;
			}
			else
				day += 30;
		}

		day += d - 1;

		answer = (day + 5) % 7;

		return answer;
	}

	int getDayOfYear() const { //1=Jan.1, 2=Jan.2, ..., 366=Dec.31 (in a leap year)
		int day = 0;

		for (int i = 1; i < m; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
				{
                    day = day + 31;
                }
			else if (i == 2) {
				if (isLeapYear() == true)
				{
                   day = day + 29;
                }
				else
                {
					day = day + 28;
                }
			}
			else
				{
                    day = day + 30;
                }
		}

		day += d;

		return day;
	}

	int getNumHolidays() const { //���ϼ� ����
		int NumHolidays = 104;

		if (isLeapYear()) {

		}

		int holidays[14];
		holidays[1] = myDate(y, 1, 1).getDayOfWeek();
        holidays[2] = myDate(y, 2, 1).getDayOfWeek();
		holidays[3] = myDate(y, 2, 2).getDayOfWeek();
		holidays[4] = myDate(y, 2, 3).getDayOfWeek();
		holidays[5] = myDate(y, 3, 1).getDayOfWeek();
		holidays[6] = myDate(y, 5, 5).getDayOfWeek();
        holidays[7] = myDate(y, 5, 15).getDayOfWeek();
		holidays[8] = myDate(y, 6, 6).getDayOfWeek();
		holidays[9] = myDate(y, 7, 17).getDayOfWeek();
		holidays[10] = myDate(y, 8, 15).getDayOfWeek();
		holidays[11] = myDate(y, 10, 3).getDayOfWeek();
		holidays[12] = myDate(y, 12, 25).getDayOfWeek();
		holidays[13] = myDate(y, 9, 16).getDayOfWeek();
		holidays[14] = myDate(y, 9, 17).getDayOfWeek();

		for (int i = 0; i < 14; i++) {
			if (holidays[i] != 0 && holidays[i] != 6)
				NumHolidays++;
		}

		return NumHolidays;
	}

	int getNumSummerTimeDays()const { //����Ÿ�� ��¥��

		int SummertimeDays;

		int firstDay = myDate(y, 3, 1).getDayOfWeek();
		int endDay = myDate(y, 10, 1).getDayOfWeek();

		int start = 0, end = 0;

		while (firstDay < 7) {
			firstDay++;
			start++;
		}

		while (start < 31)
			{
                start = start + 7;
            }

		while (endDay < 7)
         {
			endDay++;
			end++;
		}
		while (end < 31)
			{
                end = end + 7;
            }

		SummertimeDays = myDate(y, 10, end).getDayOfYear() - myDate(y, 3, start).getDayOfYear();

		return SummertimeDays;


	}
	void printCalendarOfMonth() const { // �޷������ϱ�

		myDate firstDayOfMonth(y, m, 1);

		int start = firstDayOfMonth.getDayOfWeek();
		int end;

		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			end = start + 31;
		else if (m == 2) {
			if (isLeapYear() == true)
				end = start + 29;
			else
				end = start + 28;
		}
		else
			end = start + 30;

		cout << y << " " << m << endl;

		int day = 1;
		int idx = 0;

		while (idx < end) {
			for (int j = 0; j < 7; j++) {
				idx++;

				if (start < idx && idx <= end) {
					cout << day << " ";
					day++;
				}
				else
					cout << 0 << " ";
			}
			cout << endl;
		}
	}
private:
	// information hiding : implement as you wish
	int y, m, d;
};
#endif