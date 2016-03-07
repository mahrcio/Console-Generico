#include "PlayStation.h"
#include <iostream>
using namespace std;
PlayStation::PlayStation():Console("PlayStation")
{
    conectadoPlayStationNetwork=false;
}

PlayStation::~PlayStation()
{
}

void PlayStation::conectarPlayStationNetwork()
{
conectadoPlayStationNetwork=true;
}

ostream& operator<<(ostream &output, const PlayStation &p)
{
    output << "\n Marca: " << 	p.marca;
   if (p.conectadoPlayStationNetwork) 
   {
    output << "\n Conectado em PlayStation Network";
   }    
    return output;
}