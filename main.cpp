#include <iostream>
#include "Console.h"
#include "Data.h"
#include <string>
using namespace std;
#include "Game.h"
#include "Xbox.h"
#include "PSP.h"
#include <vector>
#include <typeinfo>


int main()
{
vector<Console*> videogames;
videogames.push_back(new Psp());
videogames.push_back(new Xbox());
videogames.push_back(new PlayStation);

for (size_t i = 0; i < videogames.size(); i++) {
            
             PlayStation *psPtr = dynamic_cast<PlayStation*> (videogames[i]);
             if(psPtr!=0){
                 psPtr->ligar();
                 cout<<"\nVideogame foi ligado";;
             }
}
    for ( size_t j = 0; j < videogames.size(); j++ )
     {
        cout << "Deletando videogame "                  
           << typeid(*videogames[ j ]).mostraMarca() << endl;

        delete videogames[ j ];
     } 

}
