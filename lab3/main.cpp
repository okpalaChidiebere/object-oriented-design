#include <iostream>
#include <iomanip>
using namespace std;
#include "Employee.h"

int main()
{
     Employee employees[NUM_EMPL];
     int tempId;
     int index;

     cout << fixed << showpoint << setprecision(2);

     for (int i=0; i<NUM_EMPL; i++)
     {
          employees[i]=readEmployee();
	  cin.ignore(256,'\n');
     }
     for (int i=0; i<NUM_EMPL; i++)
     {
          printEmployee(employees[i]);
     }

     //----Add code below for Step2----
       cout<<"Enter an ID to look for: "; //prompt the user for an id
        cin>>tempId;
	cout<<endl;
	index=findEmployee(employees,tempId,5);  //call the findEmployee function
	  // if found, display the name of the employee that goes with the id
	  if(index==-1)
	    {
	    cout<<"Did not find an Employee with that iD!"<<endl;
	    }
	  else
	    {
	    cout<<employees[index].name<<endl;
	    }

	return 0;
}
