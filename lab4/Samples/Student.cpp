#include "Student.h"

Student::Student() //default constructor
{
      name = "";
      id = 0;
      mark[0] = 0;
      mark[1] = 0;
      mark[2] = 0;
}
Student::Student(string aName, int anId, int mark1, int mark2, int mark3)
//other constructor
{
      name = aName;
      id = anId;
      mark[0] = mark1;
      mark[1] = mark2;
      mark[2] = mark3;
 }
 
void Student::setName(string aName)
{
      name = aName;
}
void Student::setId(int anId)
{
      id = anId;
}
void Student::setMark (int mark1, int mark2, int mark3)
{
      mark[0] = mark1;
      mark[1] = mark2;
      mark[2] = mark3;
}
 
string Student::getName() const
{
      return name;
}
int Student::getId() const
{
      return id;
}
void Student::printAll() const 
{
      cout << "Hello, " << name << endl; 
      cout << "Your Student ID is " << id << endl;
      cout << "Your marks are: " << endl;
      for (int i=0; i < 3; i++) 
      {
         cout << "Test " << i+1 << ": " << mark[i] << " " << endl;
      }
}
int Student::getMark(int i) const
{
      if (i <=2 && i>=0)
      {
         return mark[i];
      }
      else
      {
         return -1;
      }
}

