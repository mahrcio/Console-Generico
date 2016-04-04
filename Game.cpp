#include "Game.h"
#include <string>
#include <iostream>
using namespace std;


Game::Game()
{
    nome="Novo Game";
}


Game::Game(string n)
{
    nome=n;
}

Game::Game(const Game &game)
{
nome=game.nome;
}

Game::~Game()
{
}
string Game::getNome()
{ return nome;}

ostream &operator<<(ostream &output, const Game &game)
{
    output <<"\nNome= "<<game.nome;    
    return output;
}

bool Game::operator==(const Game &g)
{
if (nome!=g.nome)
        return false;
return true;
}

const Game & Game::operator=(const Game &g)
{
 nome=g.nome;
    return *this;
}

bool Game::operator!=(const Game &c)
{
return !(*this==c);
}