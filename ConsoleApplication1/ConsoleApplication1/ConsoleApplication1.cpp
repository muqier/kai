// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

// mutou.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CMuQiEr
{
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int check();
public:
	CMuQiEr();
	CMuQiEr(int y, int m, int d, int h, int k, int  s);
	int setMuQiEr(int y, int m, int d, int h, int k, int  s);
	int printfMuQiEr();
	void addOneday();
	void addOneTime();
	int getyear;
	int getmonth;
	int getday;
	int gethour;
	int getminute;
	int getsecond;
};
CMuQiEr::CMuQiEr()
{
	year = 2019;
	month = 5;
	day = 1;
	hour = 12;
	minute = 59;
	second = 59;

}
CMuQiEr::CMuQiEr(int y, int m, int d, int h, int k, int  s)
{
	year = y;
	month = m;
	day = d;
	hour = h;
	minute = k;
	second = s;
	if (check() == 1 || check() == -1)
	{
		month = 1;
		day = 1;
		cout << "�����˴������ڣ�Ի����1" << endl;
	}
}
int CMuQiEr::setMuQiEr(int y, int m, int d, int h, int k, int  s)
{
	year = y;
	month = m;
	day = d;
	hour = h;
	minute = k;
	second = s;
	{
		month = 1;
		day = 1;
		cout << "�����˴���������ʱ�䣬������1" << endl;
		return -1;
	}
	return 0;
}
int CMuQiEr::printfMuQiEr()
{
	cout << year << "��" << month << "��" << day << "��" << endl;
	cout << hour << "ʱ" << minute << "��" << second << "��" << endl;
	return 0;
}
int CMuQiEr::check()
{
	int flatYearDays[12] = { 31,28,31,30,31,30,31,30,31,30,31,30 };
	int leapYearDays[12] = { 31,29,31,30,31,30,31,30,31,30,31,30, };
	if (month > 12 || month < 1)
		return -1;
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
	{
		if (leapYearDays[month - 1] < day)
		{
			day = 1;
			month++;
		}



	}
	else
	{
		if (flatYearDays[month - 1] < day)
		{
			day = 1;
			month++;
		}
	}
	if (month > 12)
	{
		month = 1;
		year++;
	}
}

int main()
{
	CMuQiEr od;
	od.setMuQiEr(2000, 1, 33, 2, 22, 23);
	od.printfMuQiEr();
	return 0;
}

