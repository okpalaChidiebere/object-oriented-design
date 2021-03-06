/*************************************************************
file name: Matrix.h
name: Okpala Chidiebere Collins
student number:200356606
program purpose: to sum to array up and do a power operation to the power of the matrix
main algorithm:
-prompts the use to enter two matricesd
- finds their sum
- checks if they are equal
-prompts the user to enter the matrix to the power any number
-calculates the result and prints it
assumptions: 
- the maximumnumber if matrix is 10x10
********************************************************************/
#include "Matrix.h"//including user defined file .h 

int main()
{
  //local datas
  array matrix1;  //stores the first martrix
  array matrix2;  //stores the second matrix
  array matrix3;  //stores the sum of matrix1 and matrix2
  int matrixPower;  //stores the power matrix of matrix3

  cout<<"Enter the number of rows: "; //promts the user to enter the number of rows
  cin>>useRow; //gets the inputs from the user
  cout<<"Enter the number of columns: "; //promts the user to enter the number of rows
  cin>>useCol; //gets the inputs from the user
  cout<<endl;
  cout<<"Enter the elements of matrix 1 row by row:"<<endl; //promts the user to enter the numbers for the first matrix of size chosen
  matrix1.readArray(); //gets the array numbers
  cout<<endl;
  cout<<"Enter the elements of matrix 2 row by row:"<<endl; //promts the user to enter the numbers for the second matrix of size chosen
  matrix2.readArray();//gets the array numbers
  cout<<endl;
  cout<<"Matrix 1 == Matrix 2?"<<endl; //prompts the user if both arrays are equal or not
  if(matrix1==matrix2) //an expressiin to check if both matrix are equal
    { //assertion: both matrix are equal
      cout<<"Yes"<<endl<<endl; //prints out yes
    }
  else //assertion: both matrix are not equal
    cout<<"No"<<endl<<endl;//prints out no
  cout<<"Matrix 1 + Matrix 2:"<<endl; //prompts the user the sum of both matrix
  matrix3=matrix1.add(matrix2); //adds both matrices
  matrix3.printArray();  //prints it out
  cout<<endl;
  cout<<"Matrix 1 power n. Enter n: "; //prompts t5he user to enter the power of the matrix needed
  cin>>matrixPower;  //gets the power from the user
  matrix3=matrix1.power(matrixPower);  //performs the pwer matrix 
  matrix3.printArray();  //prints the power matrix

  return 0;
} //end main
