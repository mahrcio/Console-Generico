#include "Xbox.h"
#include <iostream>
using namespace std;
Xbox::Xbox():Console()
{
  marca="Xbox";
  conectadoXboxLive=false;  
  kinectConectado=false;
}

Xbox::Xbox(const Xbox &xb):Console(static_cast<Console>(xb))
{
  conectadoXboxLive=xb.conectadoXboxLive;  
  kinectConectado=xb.kinectConectado;
}


Xbox::~Xbox()
{
}


ostream &operator<<(ostream &output, const Xbox &xbox)
{
    output <<static_cast< Console > (xbox)
    << "\nXboxLive?= "<< (xbox.conectadoXboxLive? "Conectado":"Desconectado");
    return output;
}
//
bool Xbox::operator==(const Xbox &c)
{
if (static_cast <Console> (*this) != static_cast <Console> (c))
        return false;
if (conectadoXboxLive!=c.conectadoXboxLive)
        return false;
if (kinectConectado!=c.kinectConectado)
        return false;
return true;
}

const Xbox & Xbox::operator=(const Xbox &x)
{
    static_cast <Console&> (*this) = static_cast <Console> (x);
    conectadoXboxLive=x.conectadoXboxLive;
    kinectConectado=x.kinectConectado;
    return *this;
}

bool Xbox::operator!=(const Xbox &c)
{
return !(*this==c);
}