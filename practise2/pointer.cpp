// Filename: pointers.cpp

#include <string.h>
#include <iostream>
using namespace std;


struct Student
{
    string name;
    int id;
    int *mark;
  ~Student(){delete[]mark;mark=NULL;}
};

void initStudent(Student* ptr, int);   // function prototype for initialization
void printStudent(Student* ptr, int);     // function prototype for printing
//*********************** Main Function ************************//
int main ()
{
    Student stu;		  // instantiating an STUDENT object
    Student*  stuPtr = &stu;  // defining a pointer for the object
    int maxSize;
    cout<<"How many marks are there? ";
      cin>>maxSize;
    initStudent(&stu, maxSize);	  // initializing the object
    printStudent(&stu, maxSize);             	  // printing the object




} // end main

//-----------------Start of functions----------------------------//

void initStudent(Student* ptr, int mark)
{
   ptr->mark=new int[mark];
  cout<<"Please enter a name: ";
  cin>>ptr->name;
  cout<<"please enter an id: ";
  cin>>ptr->id;
  for(int i=0;i<mark;i++)
    {
  cout<<"Please enter a mark: ";
  cin>>ptr->mark[i];
    }
 
}

void printStudent(Student* ptr, int mark)
{
  cout<<"Student info:\n";
  cout<<"Name: ";
  cout<<ptr->name<<endl;
  cout<<"Id: ";
  cout<<ptr->id<<endl;
  for(int i=0;i<mark;i++)
      cout<<"Mark "<<i<<": "<<ptr->mark[i]<<endl;
}
