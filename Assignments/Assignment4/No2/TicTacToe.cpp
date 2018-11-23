/********************************************************************
file nme:TestTicTacToe.cpp
Name:Okpala Chidiebere Collins
student number:200356606
file Purpose: to define the functions define in the class
***************************************************************************/
#include "TicTacToe.h"  //including user defined file

TicTacToe::TicTacToe()  //constructor definition
{
  //a two for-loop to go round all the indexes
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      array[i][j]=0;  //initializes all the indexes to zero
}

void TicTacToe::setIndex1(int row,int col)  //setter for player one definition
{
  array[row-1][col-1]=1;   //initializes the index entered to 1 for player 1
}


void TicTacToe::setIndex2(int row,int col) //setter for player two definition
{
  array[row-1][col-1]=2;   //initializes the index entered to 2 for player 2
}

bool TicTacToe::win()  //function definiton that checks if any of the  player wins the player 
{
  if(array[1-1][1-1]==array[2-1][1-1]&&array[2-1][1-1]==array[3-1][1-1]&&array[1-1][1-1]!=0)  //a boolean expression for first column
    return true; //assertion: any of the player wins
  else if(array[1-1][2-1]==array[2-1][2-1]&&array[2-1][2-1]==array[3-1][2-1]&&array[1-1][2-1]!=0)  // a boolean expression for second column
       return true;//assertion: any of the player wins
  else if(array[1-1][3-1]==array[2-1][3-1]&&array[2-1][3-1]==array[3-1][3-1]&&array[1-1][3-1]!=0) //a boolean expression for third column
  return true;//assertion: any of the player wins
  else if(array[1-1][1-1]==array[1-1][2-1]&&array[1-1][2-1]==array[1-1][3-1]&&array[1-1][1-1]!=0)  //a boolean expression for first row
   return  true;//assertion: any of the player wins
  else if(array[2-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]==array[2-1][3-1]&&array[2-1][1-1]!=0) //a boolean expression for second row
  return true;//assertion: any of the player wins
 else if(array[3-1][1-1]==array[3-1][2-1]&&array[3-1][2-1]==array[3-1][3-1]&&array[3-1][1-1]!=0) //a boolean expression for third row
   return true;//assertion: any of the player wins
 else if(array[1-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]==array[3-1][3-1]&&array[1-1][1-1]==1)//a boolean expression for fiest diagonal from the right
   return true; //assertion: any of the player wins
else if(array[3-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]==array[1-1][3-1]&&array[3-1][1-1]==1) //a boolean expression for fiest diagonal from the left
   return true;//assertion: any of the player wins
 else 
   return false;//assertion: none of the player wins yet
} 

void TicTacToe::print()  //a function definition that prints to the screen the array
{//two for loop to go round the 2D array
  for(int i=0;i<3;i++) 
  {
    for(int j=0;j<3;j++)
      {
	cout<<array[i][j]<<" ";  //prints out to tjhe screen the array and space
      }
    cout<<endl; //goes to the next line to continue
  }

}

bool TicTacToe::checkIndexUsed(int row,int col)  //a function definition that checks if an ined has been used
{//two for loop to go round the 2D array
 for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
      {
	if(array[row-1][col-1]==1||array[row-1][col-1]==2) //a boolean expression to check if the index is filled with 1 or 2
	  {
	    return true;   //assertion: the index has been used
	  }
      }
   }

 return false;//assertion: the index is empty
}

int TicTacToe::playerWin()  //a function definition that returns the player that wins between player 1 and 2
{
  if(array[1-1][1-1]==array[2-1][1-1]&&array[2-1][1-1]==array[3-1][1-1]&&array[1-1][1-1]==1) //a boolean expression for first column
    return 1;//assertion:player 1 wins
   else if(array[1-1][2-1]==array[2-1][2-1]&&array[2-1][2-1]==array[3-1][2-1]&&array[1-1][1-1]==1) // a boolean expression for second column
       return 1;//assertion:player 1 wins
 else if(array[1-1][3-1]==array[2-1][3-1]&&array[2-1][3-1]==array[3-1][3-1]&&array[1-1][2-1]==1)//a boolean expression for third column
   return 1;//assertion:player 1 wins
 else if(array[1-1][1-1]==array[1-1][2-1]&&array[1-1][2-1]==array[1-1][3-1]&&array[1-1][1-1]==1) //a boolean expression for first row
   return  1;//assertion:player 1 wins
else if(array[2-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]==array[2-1][3-1]&&array[2-1][1-1]==1)//a boolean expression for second row
  return 1;//assertion:player 1 wins
 else if(array[3-1][1-1]==array[3-1][2-1]&&array[3-1][2-1]==array[3-1][3-1]&&array[3-1][1-1]==1) //a boolean expression for third row
   return 1;//assertion:player 1 wins
 else if(array[1-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]==array[3-1][3-1]&&array[1-1][1-1]==1)//a boolean expression for fiest diagonal from the right
   return 1; //assertion:player 1 wins
else if(array[3-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]==array[1-1][3-1]&&array[3-1][1-1]==1)//a boolean expression for fiest diagonal from the left
   return 1;//assertion:player 1 wins
 else  if(array[1-1][1-1]==array[2-1][1-1]&&array[2-1][1-1]==array[3-1][1-1]&&array[1-1][1-1]==2) //a boolean expression for first column
     return 2;//assertion:player 2 wins
   else if(array[1-1][2-1]==array[2-1][2-1]&&array[2-1][2-1]==array[3-1][2-1]&&array[1-1][1-1]==2) // a boolean expression for second column
       return 2;//assertion:player 2 wins
 else if(array[1-1][3-1]==array[2-1][3-1]&&array[2-1][3-1]==array[3-1][3-1]&&array[1-1][2-1]==2)//a boolean expression for third column
   return 2;//assertion:player 2 wins
 else if(array[1-1][1-1]==array[1-1][2-1]&&array[1-1][2-1]==array[1-1][3-1]&&array[1-1][1-1]==2) //a boolean expression for first row
   return  2;//assertion:player 2 wins
else if(array[2-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]== array[2-1][3-1]&&array[2-1][1-1]==2)//a boolean expression for second row
  return 2;//assertion:player 2 wins
 else if(array[3-1][1-1]==array[3-1][2-1]&&array[3-1][2-1]==array[3-1][3-1]&&array[3-1][1-1]==2) //a boolean expression for third row
   return 2;//assertion:player 2 wins
 else if(array[1-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]==array[3-1][3-1]&&array[1-1][1-1]==2)//a boolean expression for fiest diagonal from the right
   return 2;//assertion:player 2 wins
else if(array[3-1][1-1]==array[2-1][2-1]&&array[2-1][2-1]==array[1-1][3-1]&&array[3-1][1-1]==2)//a boolean expression for fiest diagonal from the left
   return 2;//assertion:player 2 wins
   else 
     return -1; //assertion: none of the player wins

}
