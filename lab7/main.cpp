#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
	Date date1;
	int month,day,year;
	
	cout << "Date is: " << date1.getMonth() << "/"
             << date1.getDay()<< "/" 
	     << date1.getYear() << endl;

	cout << "Please enter integer month, day, and year separated by spaces: ";
	cin >> month >> day >> year;
	date1.setMonth(month);
	date1.setDay(day);
	date1.setYear(year);
	
	cout << "Please enter integer month, day, and year separated by spaces: ";
	cin >> month >> day >> year;

	//Calling constructor with three arguments
	Date date2(month,day,year);
	
	/*----------------------------------------------------------*/
	/*-PART 1 Change this code to the comments indicated beside-*/
	/*----------------------------------------------------------*/
	cout << date1;
	  cout<< date2;

	if (date1==date2)
		cout << "The months are the same." <<endl; //dates are same
	else
		cout << "The months are different." << endl; //dates are different

	++date1;
	++date2;
	cout << "After incrementing\n";
	cout << date1 << date2;

	/*----------------------------------------------------------*/
	/*-PART 2  Uncomment these lines                            */
	/*----------------------------------------------------------*/

	Date date3, date4;
        date3=date1+82;
        date4=6+ date2;

        cout << "After addition\n";
        cout << date1 << date2 << date3 << date4;


	return 0;
}
