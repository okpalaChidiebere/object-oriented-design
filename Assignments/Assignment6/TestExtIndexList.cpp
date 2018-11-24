/******************************************************
file name:TestExtIndexList.h
student name: Okpala Chidiebere
student number:200356606
file purpose: use to implement the program as designed
 ****************************************************/
#include "IndexList.h"
#include "ExtIndexList.h"  //including user defined class

using namespace std;
int main()
{
  //local datas
  const int maxSize=20;
  extIndexList<int,maxSize>list1; //used to store first list
  extIndexList<int,maxSize>list2; //used to store second list
  extIndexList<int,maxSize>list3;  //used to store the concatenated list
  int numItems1, numItems2;
 int size;  //stores the size of array to be used
 int number;  //stores each integer number inputed

 cout<<"List 1 of type \"int\""<<endl;  //prompts the user
     cout << "Enter number of list items: ";
     cin >> numItems1; //reads input from the user
	size = 0;
if (numItems1 >= 0  &&  numItems1 <= maxSize)
  {//assertion: size entered is less than the maxsize for the program
	   while (size < numItems1)
	   {
	     cout<<"Enter next item: ";  //prompt the user for a number
	     cin>>number; //gets the number
	     if(!list1.append(number))
	       break;  //assertion:list is filled up
            size++;
	   }
	   cout<<endl;
  }

 cout<<"List 2 of type \"int\""<<endl;  //prompts the user
     cout << "Enter number of list items: ";
     cin >> numItems2; //reads input from the user
	size = 0;
if (numItems2 >= 0  &&  numItems2 <= maxSize)
  {//assertion: size entered is less than the maxsize for the program
	   while (size < numItems2)
	   {
	     cout<<"Enter next item: "; //prompt the user for a number
	     cin>>number; //gets the number
	     if(!list2.append(number))
	       break;  //assertion:list is filled up
            size++;
	   }
	   cout<<endl;
  }
 if(numItems1+numItems2<=maxSize) //a boolean expression to make the correct concatnation of both list
   list3=list1.concatArray(list2);  //function call to concatnate both list
 cout<<"List 3: List 1 concatenated to List 2\n";  //prits the sentence
 list3.display(cout);  //display the concatnated list returned by the function
 cout<<endl<<endl;
 cout<<"List 3 sorted in ascending order\n";  //prits the sentence
 list3.selSort();  //function call to sort concatnated array 
 list3.display(cout);//display the sorted concatnated list returned by the function
 cout<<endl<<endl;
 cout<<"Enter the number to search in List 3: ";  //prompts the user for a number to be searched
 cin>>number;  //gets the number
 if(list3.linSearch(number))  //function call to search for the number
   cout<<number<<" is in List 3\n"; //assertion: the number was found
 else
   cout<<number<<" is not in List 3\n"; //assertion: the number was not found

 return 0;
} //end main
