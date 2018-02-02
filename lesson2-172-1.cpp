// Section CSC160 - Computer Science I: C++

// File Name: Homework Week 2

// Student: Aidan Coopman

// Homework Number:1

// Description:

// Last Changed:

 

#include <iostream>

using namespace std;

int main( )
{
  char play_again = 'Y';
  char player1;
  char player2;
  
  while((play_again == 'Y')||(play_again == 'y'))
    {
      cout << "Player 1: Choose R, P, or S\n";
      cin >> player1;
      
      cout << "Player 2: Choose R, P, or S\n";
      cin >> player2;
      
      if ( player1 == player2)
	{
	  cout << "Its a tie, both players chose '" << player1 << "'" << endl;
	}
      else if((player1 == 'R')||(player1 == 'r'))
	{	
	  if((player2 == 'P')||(player2 == 'p'))
	    {
	      cout << "Player 2 won! Paper covers Rock\n";
	    }
	  else
	    {
	      cout << "Player 1 won! Rock smashes Scissors\n";
	    }
	}	
      else if((player1 == 'P')||(player1 == 'p'))
	{
	  if((player2 == 'S')||(player2 == 's'))
	    {
	      cout << "Player 2 won! Scissors cuts up Paper!\n";
	    }	
	  else
	    {
	      cout << "Player 1 won! Paper covers Rock\n";
	    }
	}
      else //player 1 must be 'S'
	{
	  if((player2 == 'P')||(player2 == 'p'))
	    {
	      cout << "Player 1 won! Scissors cuts up Paper\n";
	    }
	  else
	    {
	      cout << "Player 2 won! Rock smashes Scissors\n";
	    }
	}
      cout << "Do you want to play again? <Enter 'Y' for yes and 'N' for no\n";
      cin >> play_again;
    }
  
  return 0;
}
