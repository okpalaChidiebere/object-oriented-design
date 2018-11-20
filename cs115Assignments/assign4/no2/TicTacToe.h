/********************************************************************
file nme:TestTicTacToe.cpp
Name:Okpala Chidiebere Collins
student number:200356606
file Purpose: to define the class and protypes of functions needed
********************************************************/
#ifndef TicTacToe_h //to avoid double definitions
#define TicTacToe_h
#include <iostream> //including input and output library

using namespace std;
//constants for the row and columns (3x3)
const int C_SIZE=3; //global variable
const int R_SIZE=3; //global variable
 
class TicTacToe
{
  private:
  int array[R_SIZE][C_SIZE]; //a local data that stores the array used in the program 

 public:
  //constructor
  TicTacToe();  //initializes the array to zero to start with

  //setter
  void setIndex1(int,int); //sets the required index of player1 to 1
  void setIndex2(int,int);//sets the required index of player2 to 2

  bool win();  //returns true if any of the player wins the game
  bool checkIndexUsed(int,int);  //returns true if the index is used
   void print();  //prints the array 
   int playerWin();  //checks the player that wins the game
};
#endif 
