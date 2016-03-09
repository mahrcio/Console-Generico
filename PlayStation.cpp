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

PlayStation::PlayStation(const PlayStation &ps):Console(static_cast<Console>(ps))
{
  conectadoPlayStationNetwork=ps.conectadoPlayStationNetwork;
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

const PlayStation & PlayStation::operator=(const PlayStation &p)
{
    static_cast <Console&> (*this) = static_cast <Console> (p);
    conectadoPlayStationNetwork=p.conectadoPlayStationNetwork; 
    return *this;
}