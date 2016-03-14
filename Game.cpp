#include "Game.h"
#include <string>
#include <iostream>
using namespace std;


Game::Game()
{
    nome="Novo Game";
}
Game::~Game()
{
}
Game::Game(string n)
{
    nome=n;
}

string Game::getNome()
{ return nome;}

ostream &operator<<(ostream &output, const Game &game)
{
    output <<"\nNome= "<<game.nome;    
    return output;
}
