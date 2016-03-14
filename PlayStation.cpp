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

ostream &operator<<(ostream &output, const PlayStation &p)
{
    output <<static_cast< Console > (p)
    << "\nPS Network?= "<< (p.conectadoPlayStationNetwork? "Conectado":"Desconectado");
    return output;
}

const PlayStation & PlayStation::operator=(const PlayStation &p)
{
    static_cast <Console&> (*this) = static_cast <Console> (p);
    conectadoPlayStationNetwork=p.conectadoPlayStationNetwork; 
    return *this;
}

bool PlayStation::operator==(const PlayStation &c)
{
if (static_cast <Console> (*this) != static_cast <Console> (c))
        return false;
if (conectadoPlayStationNetwork!=c.conectadoPlayStationNetwork)
        return false;
return true;
}

bool PlayStation::operator!=(const PlayStation &c)
{
return !(*this==c);
}