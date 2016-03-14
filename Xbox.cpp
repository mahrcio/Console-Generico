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