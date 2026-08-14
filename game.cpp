#include "Game.h"
#include <iostream>
#include <fstream>

using namespace std;

void Game::displayRules() //displays game rules
{
    ifstream inputFile("Rules.txt"); 

    string line;

    while (getline(inputFile, line))
    {
        cout << line << endl;
    }

    inputFile.close();
}

void Game::setupPlayers()
{
    cout << "Enter number of players (2-4): "; //enter number of players you want 
    cin >> numPlayers;

    for (int i = 0; i < numPlayers; i++)
    {
        string name;

        cout << "Player " << i + 1 << " name: ";
        cin >> name;

        players[i].setName(name); //set player name 
    }
}

void Game::playRound()
{
    for (int i = 0; i < numPlayers; i++) //play round with players
    {
        players[i].rollDice();
    }

    cout << endl;
    cout << "Dice Results" << endl; //dice results 

    for (int i = 0; i < numPlayers; i++)
    {
        players[i].displayDice(); //display results to players
    }
}