#include"Date.h"

Date::Date()
{
  month=0;
  day=0;
  year=0;
}
Date::Date(int m,int d,int y)
{
  month=m;
  day=d;
  year=y;
}

void Date::printAll() const
  {
    cout<<"The date is (M-D-Y): "<<month<<"-"<<day<<"-"<<year<<endl;
  }
bool Date:: sameMonth(const Date& d) const
{
  if(month==d.month)
    return true;

  return false;
}

  //getters
int Date::getMonth() const
{
  return month;
}
int Date::getDay() const
{
  return day;
}
int Date::getYear() const
{
  return year;
}

  //setters
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

