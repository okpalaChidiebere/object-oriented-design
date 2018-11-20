#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	month=0;
	day=0;
	year=0;
}
Date::Date(int m, int d, int y)
{
	month=m;
	day=d;
	year=y;
}

int Date::getMonth()const
{
	return month;
}
int Date::getDay()const
{
	return day;
}
int Date::getYear()const
{
	return year;
}
void Date::setMonth(int m)
{
	month=m;
}
void Date::setDay(int d)
{
	day=d;
}
void Date::setYear(int y)
{
	year=y;
}
int Date::endOfMonth() const
{
        int monthEnd=0;
        switch (month)
        {
                case 1:
                        monthEnd=31;
                        break;
                case 2:
                        if ((year%400==0)||((year%4==0 && year%100!=0)))
                                monthEnd=29;
                        else
                                monthEnd=28;
                        break;
                case 3:
                        monthEnd=31;
                        break;
                case 4:
                        monthEnd=30;

               case 5:
                        monthEnd=31;
                        break;
                case 6:
                        monthEnd=30;
                        break;
                case 7:
                        monthEnd=31;
                        break;
                case 8:
                        monthEnd=31;
                        break;
                case 9:
                        monthEnd=30;
                        break;
                case 10:
                        monthEnd=31;
                        break;
                case 11:
                        monthEnd=30;
                        break;
                case 12:
                        monthEnd=31;
                        break;
        }
        return monthEnd;
}

ostream& operator <<(ostream& ous, const Date& d)
{
  ous << "Date is: " << d.getMonth() << "/" << d.getDay()<< "/" << d.getYear()<< endl;
}
bool Date::operator ==(const Date& myDate) const
{
    if (month==myDate.month)
	return true;
    else
	return false;
}

Date Date::operator++()
{

        if (day==endOfMonth())  //endOfMonth returns 28, 29, 30 or 31 depending on month 
        {
                if (month==12)
                {
                        year+=1;
                        month=1;
                }
                else
                        month+=1;
                day=1;
        }
        else
                day+=1;
        return *this;
}

Date operator + (const Date& d, int b)
{
  Date tempDate=d;
  for(int i=0;i<b;i++)
    ++tempDate;

  return tempDate;
}

Date operator + (int b, const Date& d)
{
  return tempDate=d+b;
}
