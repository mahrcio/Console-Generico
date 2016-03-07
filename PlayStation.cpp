#include "PlayStation.h"
#include <iostream>
using namespace std;
PlayStation::PlayStation():Console("PlayStation")
{
    conectadoPlayStationNetwork=false;
}

PlayStation::~PlayStation()
{
    marca="Sony";
}

PlayStation::PlayStation(const PlayStation &ps):Console(static_cast<Console>(ps))
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