#include <iostream>
using namespace std;
#include "Employee.h"

void printEmployee(const Employee& c)
{
    int i;

    cout <<"The Employee info is: ";
    cout << c.name << ", " << c.id<<", "<<c.salary<<endl;
   
}
Employee readEmployee()
{
    int i;

     Employee worker;
    cout << "Employee Name?: ";
    getline(cin, worker.name);   // command to input a string
    cout << "Employee ID?: ";
    cin >> worker.id;
    cout<<"Employee yeraly salary: ";
    cin>>worker.salary;
    return worker;
}
 int findEmployee(const Employee array[],int tId,int num)
 {
   int i=-1;
   for(int x=0;x<num;x++)
     {
       if(tId==array[i].id)
	 i=x;
     }
   return i;
     
 }

