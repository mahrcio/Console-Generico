#include "Xbox.h"
#include <iostream>
using namespace std;
Xbox::Xbox():Console("Xbox")
{
  conectadoXboxLive=false;  
  kinectConectado=false;
}

Xbox::Xbox(const Xbox &xb):Console(xb)
{
  conectadoXboxLive=xb.conectadoXboxLive;  
  kinectConectado=xb.kinectConectado;
}


Xbox::~Xbox()
{
}

void Xbox::conectarXboxLive()
{
conectadoXboxLive=true;
}
ostream &operator<<(ostream &output, const Xbox &xbox)
{
    output<< "\nXboxLive?= "<< (xbox.conectadoXboxLive? "Conectado":"Desconectado");
    return output;
}
//
bool Xbox::operator==(const Xbox &c)
{
if (conectadoXboxLive!=c.conectadoXboxLive)
        return false;
if (kinectConectado!=c.kinectConectado)
        return false;
return true;
}

const Xbox & Xbox::operator=(const Xbox &x)
{
    conectadoXboxLive=x.conectadoXboxLive;
    kinectConectado=x.kinectConectado;
    return *this;
}


bool Xbox::operator!=(const Xbox &c)
{
return !(*this==c);
}

void Xbox::ligar()
{
if (ligadoNaTomada) {
  if ( !onoff )
    {
        onoff = true;
        cout << "O Xbox foi ligado\n";
    }
    else
        cout << "Xbox esta ligado" << '\n';    
}
}