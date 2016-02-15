#include <iostream>
using std::cout;
#include "console.h"
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
