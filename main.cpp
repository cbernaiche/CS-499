#include <iostream>
#include <ctime>
#include "Game.h"

using namespace std;

int main()
{
    srand(time(0));

    Game game;

    game.displayRules(); //display game rules 

    cout << endl;

    game.setupPlayers(); //setup players for the game 

    cout << endl;

    game.playRound(); //start the round 

    return 0;
}