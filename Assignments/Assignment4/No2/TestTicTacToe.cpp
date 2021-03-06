/********************************************************************
file nme:TestTicTacToe.cpp
Name:Okpala Chidiebere Collins
student number:200356606
program Purpose: To play the game TicTacToe
main algorithm:
-tell the users to put numbers in the index
-loop round to continue playing
-while looping we check the rows and columns to know the one that is thesame to know who wins
********************************************************************/
#include "TicTacToe.h"  //including user defined file

int main()
{
  //local datas
  TicTacToe gameArray;  //declaring an instance of the class
  int row=0,col=0; //stores the index for the row and colimn
  int player; //stores the value for the player that finally wins
  gameArray.print();  //prints the default array which is all initialized to zero
  cout<<endl;
  do{
    cout<<"Player1 move: "; //prompts player one to move
    cin>>row>>col; //gets the input from the user
    while(gameArray.checkIndexUsed(row,col)) //checks if the index the person entered has been filled
      { //assertion: the index has been used
	cout<<row<<" "<<col<<" is used. please choose another move: "; //prompts the user the row has been used
	cin>>row>>col;//gets the input from the user
      }
    gameArray.setIndex1(row,col); //sets the index
    gameArray.print(); //prints the index
    cout<<endl;
    if(gameArray.win()) //checks if player 1 wins
      break; //assertion: player 1 wins
    cout<<"Player2 move: ";//prompts player two to move
    cin>>row>>col;//gets the input from the user
    while(gameArray.checkIndexUsed(row,col))//checks if the index the person entered has been filled
      {//assertion: the index has been used
	cout<<row<<" "<<col<<" is used. please choose another move: ";//prompts the user the row has been used
	cin>>row>>col;//gets the input from the user
      }
    gameArray.setIndex2(row,col);//sets the index 
    gameArray.print();//prints the index
    cout<<endl;
  }while(!gameArray.win()); //checks if player 2 wins
  //assertion: any of the player wins
  player=gameArray.playerWin(); //checks the player that wins
  if(player==1) //a boolean expression for if player one wins
    {
      cout<<"Player1 wins!"<<endl; //prints the player that wins
    }
  else if(player==2)//a boolean expression for if player two wins
    {
      cout<<"player2 wins!"<<endl;//prints the player that wins
    }
  else 
    //assertion: none of the player wins
    cout<<"No player wins!"<<endl;  //prints none of the player wins

  return 0;
} //end main
