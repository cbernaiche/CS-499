#pragma once
#include "Player.h"

class Game
{
private:
    Player players[4];
    int numPlayers;

public:
    void displayRules(); //display game rules
    void setupPlayers(); //setup players for game 
    void playRound(); //start the round 
};
