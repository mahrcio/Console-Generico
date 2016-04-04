#include <iostream>
#include "Console.h"
#include "Data.h"
#include <string>
using namespace std;
#include "Game.h"
#include "Xbox.h"
#include "PSP.h"
# include <vector>


int main()
{
vector<Console*> videogames;
videogames.push_back(new Psp());
videogames.push_back(new Xbox());
videogames.push_back(new PlayStation);

}
