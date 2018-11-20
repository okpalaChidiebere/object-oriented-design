/**************************************************************
student name: Chidiebere Okpala Collins
student number:200356606
purpose: to sort and search naturals
program algorithm: gets the input from the user
-use the already made algorith for the functions needed to do the serching
 and sorting to sort the numbers.
- prompts the user to search for a number.
-gets the number and call the function linsearch to search for the number
-asks the user if he or she wants to continue searching, if no we exit the program
*************************************************************************/
#include<iostream> //including a library that defines the input and output
#include<iomanip>  //including a library that help arrangs the things printed

//declearing function prototypes needed in the program 
void readArray(int [],int);  //gets the numbers to be sorted and searched from tthe user
int findIndexOfMin(const int[],int,int);  //find the index of the minimum number entered
void exchange(int& ,int& );  //exchanges two numbers or arrays
void selsort(int [],int);  //sorts the number entered by the user
void print(int[],int);  //prints the array required to be printed
int linSearch(const int[],int ,int );  //searches the array 
 
using namespace std;

int main()  //main functuion starts
{
  //local variables
  const int ARRAY_SIZE=1000; //the maximum numbers the program can access
  int values[ARRAY_SIZE];  //stores all the numbers entered by the user
  int numSearch;  //stores the number to be searched
  int naturals;  //stores the total number of naturals to be accesed at the time the program is used
  int index;  //stores the index returned after the searching by the function linSearch
  char inchar; //stores the letter entered by the user wether to continue or not 

  cout<<"Enter the number of naturals: ";  //prompts the user to enter the number of naturals to be accessed
  cin>>naturals;  //gets the number from the user
  cout<<"Enter the natural numbers to sort: "<<endl;  //prompts the user to enter the numbers to be sorted and searched
  readArray(values,naturals);  //function call to get the naturals
  cout<<endl;
  cout<<"Numbers sorted in ascending order: "<<endl;  //tells the user the number have been sorted
 //assertion: the numbers have been sorted
  selsort(values,naturals); //function call to sort the naturals entered by the user
  print(values,naturals); //function call to print the sorted array
  cout<<endl;
  //used a do while loop for the search to be done atleast once in the program
  do
    {
      cout<<"Enter the number to search: ";  //prompts the user to enter the number to be searched
      cin>>numSearch;  //gets the number to be searched from the user
      index=linSearch(values,numSearch,naturals);  //function call to search for the number
      if(index==-1) //an expression for if the number returned is not found
	cout<<"Number "<<numSearch<<" does not exist!"<<endl<<endl; //tells the user the number was not found
      else  //assertion: the number was found
	cout<<"Number "<<numSearch<<" is found at position "<<index<<endl<<endl;;  //tells the user the number was found
      cout<<"Do you want to continue [Y/N]: ";  // prompts the user if he or she want to continue the search
      cin>>inchar;
 //gets the char from the user
    }while(inchar=='Y'||inchar=='y');  //a loop that is true if the user says yes
  cout<<"Good bye!"<<endl; //asserttion: the user want to quit the program

  return 0;
}  //end main function
//*******************************************************
//function definition for all the prototypes declared above in the  program
void readArray(int items[],int size) //a function with two parameters
  {
    for(int i=0;i<size;i++) //a loop to stores all the naturals in indexs of the array declared
      {
	cin>>items[i]; //gets and stores the naturals 
      }
  }  
int findIndexOfMin(const int x[],int startIndex,int endIndex) //a function with three parameters
{
  //local variables
  int minIndex; //stores the minimum index
  int i; //a variable for the loop in function
  if((startIndex<0)||(startIndex>endIndex))  //assertion: an incorrect entry was made by the user
    {
      cout<<"Error in subarray bonds"<<endl; //displays the error
      return -1;
    }
  //assertion: a correct entry was made
  minIndex=startIndex; //assigns the start index as the minimum index
  for(i=startIndex+1;i<=endIndex;i++)
    {
      if(x[i]<x[minIndex]) //an expression for if a smaller number was encountered
	{
	  minIndex=i;  //replaces the number a the minimnum number
	}
    }
  return minIndex;  //return the index of minimum number
}
void exchange(int& a1,int& a2) //a function with two parameters 
{
  int temp; //a local variable use for a temporary storage in the exchanging of numbers
  temp=a1;
  a1=a2;
  a2=temp;
}
void selsort(int items[],int n)  // a function with two parameters
{
  int minSub; //stores the index of the minimum number returned
  for (int i=0;i<n-1;i++)
    {
      minSub=findIndexOfMin(items,i,n-1); //function call to find the index of the minimum nuber
      if(minSub!=-1) //assertion: an error didnt occur in finding the index
	exchange(items[minSub],items[i]); //function call do the exchange between the naturals
    }
}
void print(int items[],int size) //a function with two parameters
{
  for(int i=0;i<size;i++)
    {
      cout<<items[i]<<setw(3); //prints out the number in each index of the arrary
    }
  cout<<endl;
}
int linSearch(const int items[],int target,int size)  //a function with three parameters
{
  for(int next=0;next<size;next++) //a loop to access all the index of the arraty
    {
      if(items[next]==target)  //an expression that chackes if the number to search for is found
	return next;//assertion; the number was found
    }
  return -1; //assertion: the number was not found
}
