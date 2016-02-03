#include <iostream>
using std::cout;
#include "ConsoleGenerico.h"
#include <string>
using std::string;

int main()
{
ConsoleGenerico videogame("Sony");

videogame.ligar();
videogame.mostraMarca();

ConsoleGenerico videogame2(videogame);

videogame2.mostraMarca();

}
