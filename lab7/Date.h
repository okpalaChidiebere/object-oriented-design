#include <iostream>
using namespace std;

class Date
{
  private:
	int month;
	int day;
	int year;
  public:
	Date();
	Date(int m, int d, int y);
	int endOfMonth()const;
	int getMonth()const;
	int getDay()const;
	int getYear()const;
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);
	bool operator ==(const Date&) const;
        Date operator++();
};

ostream& operator<<(ostream&, const Date&);
Date operator+ (const Date&, int);
Date operator+ (int, const Date&);
