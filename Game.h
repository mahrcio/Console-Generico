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
    Game(const Game &game);
    ~Game();
    string getNome();
    const Game & operator=(const Game &g );
    bool operator==(const Game &g );
    bool operator!=(const Game &c);
private:
    string nome;

};

#endif // GAME_H
