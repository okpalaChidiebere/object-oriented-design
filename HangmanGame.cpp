/******************************************************************
student name: Chidiebere Okpala Collins
student number:200356606
program purpose: to play the game called HumgmanGame
fileName:HungmanGame.cpp
program main algorithm:
-gets the word and number of trials to use in guessing the word from the user
-create a default array and fill it with char "*"
-check the word entered by the user if it is found i assign the position of the word with thesame to the default array
assumptions: the number of word will have 30 letters in the program
*********************************************************************/
#include<iostream> //including a librabry that defines input and output
 using namespace std;

//declaring the function prototypes
void solution(string&,char[],char,const int); //compares two stings 
void printArray(char[],const int); //prints the array required
int  Check(string,char);  //checks if the char entered is found
bool Win(string&,char[],const int);  //checks if the user have won the game
//global variables
int alreadyexist(char[],char,const int);  //to check if the letter has been guessed alredy
const int WORD_SIZE=30;  //size for the maximum number of letter word to be entered in the program
char check[WORD_SIZE]={'*'};  //a default array with all the elemts in it of char '*'
int main()  //main program starts
  {
    //local variables of the main function
    int position;  //stores the position of the letter entered if found
    string word;  //stores the word to be quessed
    int maxTrials; //stores the number of trials for the game
    char letter;  //stores the letter quessed by the user
    int alreadyquessletter;  //a variable used when a letter already quessed is entered again
    int  wordLength;  //stores the length of the word entered by the user
    //a for loop to assign all the index of the check array the '*'
    for(int i=0;i<30;i++)
      {
	check[i]='*';
      }
    cout<<"Enter the word to be guessed: ";  //prompts the user to enter thw word to be uysed in the program
    cin>>word;  //gets the word from the user
    wordLength=word.length();
    cout<<"Enter the max number of trials: "; //prompts the user to enter the number of trials for the game
    cin>>maxTrials;  //gets the number from the user
    int v; //declaring a variable for the loop to be fuhter used outside the loop
    //assertion: the word and the number of trials have been enterd correctly
    for(v=maxTrials;v>0;v--)  //a loop statement to continue the guessing
      {
	cout<<"Guess a letter (you have "<<v<<" tries left): "; //prompts the user to enter the letter to be guessed
	cin>>letter; //gets the letter from the user
	alreadyquessletter=alreadyexist(check,letter,wordLength); //a function call to check if the letter has been guessed already
	while( alreadyquessletter==-1)
	  {
	    cout<<"'"<<letter<<"' has already been used. Try again."<<endl;  //telle the user the letter has been guessed
	    cout<<"Guess a letter (you have "<<v<<" tries left): "; //gives the user another chance
	    cin>>letter;
	    alreadyquessletter=alreadyexist(check,letter,wordLength);
	  }
	//assertion: the letter is not guessed at this point
	position=Check(word,letter);//function call to check if the letter was found in the word or not
	if(position==-1) //an expression if the word was not found
	  { //assertion: the word was not found
	    cout<<"Wrong! Try again. Word so far is: "; //tells the letter the number was not found
	    printArray(check,wordLength); //prints the default array with changes not made
	  }
	else  //assertion: the letterquessed by the user was found
	  {
	    cout<<"Right! Word so far: ";  //tells the user the word was found
	    solution(word,check,letter,wordLength); //function call to process the word enterd with the dafault array to make changes in the default array
	    printArray(check,wordLength); //prints the default array to open the position of the letter guessed correct
	    if(Win(word,check,wordLength)) //function call to checks if the default array has been filled with the word enterd uindex by index correctly
	    {  //assertion: the user has guessed all the words correctly
		cout<<"You win!"<<endl;  //tells the user he or she has won
		break;  //breaks out of the loop immediately for the user not to continue guessing even when he or she has won
	      }
	  }
      }
    //assertion: the user has guessed the word correctly or the number of trials has finished and the user didint guess correctly
    if(v==0) //an expression when the number of trials expires
	  {
	    cout<<"You loose!"<<endl; //tells the user he or she loosses the game
	  }
    return 0;
  } //end main function
//***************************************************************
//function definition for the prototypes above in the program
void solution(string& x,char c[],char v,const int size) //a function with 4 parameters
{
  for(int i=0; i< size; i++)  //a loop to access all the letters 
    {
      if(c[i]=='*'&&v==x[i]) //if the letter enterd is == the word entered
	{
	  c[i]=v; //assigns the letter to thesame index of letter in word to the default array
	}
    }
}
void printArray(char w[],const int size) //a function with two parameters
{
  for(int i=0;i<size;i++)  //a loop to access all the letters 
    {
      cout<<w[i]; //prints the letter in the index of the array 
    }
  cout<<endl; //cusor goes to next line
}
int  Check(string z ,char c)  //a function with two parameters
{
  string::size_type pos=z.find(c);  //checks if the letter entered if in the word quessed
  if(pos==string::npos) //an expression if the letter is not found
    {
      return -1;  //returns -1 to the main function
    }
  //assertion: the letter was found
  return pos;// returns the correct position
}
bool Win(string& w,char d[], const int size) //a bool function with three parameters
{
  for(int q=0;q<size;q++) //a loop to access all the letters 
    {
      if(w[q]!=d[q])  //assertion the two arrays are not equal
	return false;  //returns false to the main function
    }
  //assertion: the twoarrays are equal
  return true;  //returns true
}
int alreadyexist(char s[],char v,const int z) //a function with three parameters
{
  for(int i=0;i<z;i++)  //a for loop to access all the index
    {
      if(v==s[i]) //assertion: the person enters a letter that has been quessed already
	return -1;  //returns  -1 to the main
    }
  return 1;
}
