#include <iostream>
using std::cout;
#include "Console.h"
#include <string>
using std::string;

int main()
{
Console videogame("Sony");

videogame.ligar();
videogame.mostraMarca();

Console videogame2(videogame);

videogame2.mostraMarca();

}
