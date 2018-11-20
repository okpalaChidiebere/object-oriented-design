#ifndef __Cat_h__
#define __Cat_h__
#include <string>
using namespace std;

class Cat
{
 private:
   double length;
   double height;
   double tailLength;
   string eyeColour;
   string furClassification; //long, medium, short, none
   string furColours[5];
 public:
   //constructor
   Cat();
Cat (double, double, double, string, string, const string[]);

//getter
 int getHeight()const;

void readCat ();
 void printCat ()const;
 bool isCalico ()const;
bool isTaller (const Cat&)const;

};

#endif
