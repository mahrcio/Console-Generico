#include "Game.h"
#include <string>
using std::string;


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
