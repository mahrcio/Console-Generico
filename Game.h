#ifndef GAME_H
#define GAME_H
#include <string>
using std::string;
class Game
{
public:
    Game(string n);
    Game();
    ~Game();
    string getNome();
private:
    string nome;

};

#endif // GAME_H
