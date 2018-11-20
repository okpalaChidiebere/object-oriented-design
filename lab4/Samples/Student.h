#include <iostream>
using namespace std;

class Student
{
    private:
      string name;
      int id;
      int mark[3];
    public:
      Student();
      Student(string aName, int anId, int mark1, int mark2, int mark3);
      void setName(string aName);
      void setId(int anId);
      void setMark (int mark1, int mark2, int mark3);
      string getName() const;
      int getId() const;
      int getMark(int i) const;
      void printAll() const;
};
