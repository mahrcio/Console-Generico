#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>
using namespace std;
class Game
{
friend ostream& operator<<(ostream &output, const Game &game);
public:
    Game(string n);
    Game();
    ~Game();
    string getNome();
private:
    string nome;

};

#endif // GAME_H
