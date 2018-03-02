//Author: Noah Huff

#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;
int plays;
int wins = 0;
int main()
{
  SecretDoor game;
   
    cout<<"How many times would you like to play?"<<endl;
    cin>>plays;
    for ( int i = 0; i < plays; i++ ) {

        game.newGame();
        game.guessDoorC();
        game.guessDoorC();
        if ( game.isWinner() == true ) {
            wins++;
        }
        
    
    }

    cout<<"You won "<<wins<<" times!";
  return 0;
}
