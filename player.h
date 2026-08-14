#pragma once
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int dice[5];

public:
    void setName(string n); //set player name 
    string getName();
 
    void rollDice(); //roll players dice
    void displayDice(); //display numbers on dice 
 
    int* getDice();
};