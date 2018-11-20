// Filename: pointers.cpp

#include <string.h>
#include <iostream>
using namespace std;


struct Student
{
    string name;
    int id;
    int mark[3];
};

void initStudent(Student* ptr);   // function prototype for initialization
void printStudent(Student* ptr);           // function prototype for printing

//*********************** Main Function ************************//
int main ()
{
    Student stu;		  // instantiating an STUDENT object
    Student*  stuPtr = &stu;  // defining a pointer for the object

    initStudent(&stu);	  // initializing the object
    printStudent(&stu);             	  // printing the object




} // end main

//-----------------Start of functions----------------------------//

void initStudent(Student* ptr)
{
  cout<<"Please enter a name: ";
  cin>>ptr->name;
  cout<<"please enter an id: ";
  cin>>ptr->id;
  cout<<"Please enter a mark: ";
  cin>>ptr->mark[0];
 cout<<"Please enter a mark: ";
  cin>>ptr->mark[1];
 cout<<"Please enter a mark: ";
  cin>>ptr->mark[2];
}

void printStudent(Student* ptr)
{
  cout<<"Student info:\n";
  cout<<"Name: ";
  cout<<ptr->name<<endl;
  cout<<"Id: ";
  cout<<ptr->id<<endl;
  for(int i=0;i<3;i++)
      cout<<"Mark "<<i<<": "<<ptr->mark[i]<<endl;
}
