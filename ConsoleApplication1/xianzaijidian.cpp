// ConsoleApplication4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;

int main()
{
	int time, during, hour, minute;


	cin >> time >> during;



	hour = time / 100;
	minute = time % 100;
	time = hour * 60 + minute + during;
	hour = time / 60;
	minute = time % 60;
	cout << hour * 100 + minute << endl;

	return 0;

}

