#include<iostream>
using namespace std;
class Date
{
 private:
  int month;
  int day;
  int year;

 public:
  //constructors
  Date();
  Date(int,int,int);

  void printAll() const;
  bool sameMonth(const Date&) const;
  //getters
  int getMonth() const;
  int getDay() const;
  int getYear() const;

  //setters
  void setMonth(int);
  void setDay(int);
  void setYear(int);

};


