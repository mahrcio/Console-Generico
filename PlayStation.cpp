#include "PlayStation.h"
#include <iostream>
using namespace std;
PlayStation::PlayStation():Console("PlayStation")
{
    conectadoPlayStationNetwork=false;
    ligadoNaTomada=false;
}

PlayStation::~PlayStation()
{
}

PlayStation::PlayStation(const PlayStation &ps):Console(ps)
{
  conectadoPlayStationNetwork=ps.conectadoPlayStationNetwork;
}

void PlayStation::conectarPlayStationNetwork()
{
conectadoPlayStationNetwork=true;
}

ostream &operator<<(ostream &output, const PlayStation &p)
{
    output << "\nPS Network?= "
    << (p.conectadoPlayStationNetwork? "Conectado":"Desconectado");
    return output;
}

const PlayStation & PlayStation::operator=(const PlayStation &p)
{
    conectadoPlayStationNetwork=p.conectadoPlayStationNetwork; 
    return *this;
}

bool PlayStation::operator==(const PlayStation &c)
{
if (conectadoPlayStationNetwork!=c.conectadoPlayStationNetwork)
        return false;
return true;
}

bool PlayStation::operator!=(const PlayStation &c)
{
return !(*this==c);
}


void PlayStation::ligar()
{
if (ligadoNaTomada) {
  if ( !onoff )
    {
        onoff = true;
        cout << "O PlayStation foi ligado\n";
    }
    else
        cout << "PlayStation esta ligado" << '\n';    
}
}