#include "Player.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Player::setName(string n)  //set player name
{
    name = n;
}

string Player::getName() //get players inputted name 
{
    return name;
}

void Player::rollDice() //roll dice for player
{
    for (int i = 0; i < 5; i++)
    {
        dice[i] = rand() % 6 + 1;
    }
}

void Player::displayDice() //display numbers on the dice the user rolled
{
    cout << name << "'s dice: ";

    for (int i = 0; i < 5; i++)
    {
        cout << dice[i] << " ";
    }

    cout << endl;
}

int* Player::getDice() //get dice
{
    return dice;
}