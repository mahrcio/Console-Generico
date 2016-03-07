#include "Xbox.h"
#include <iostream>
using namespace std;
Xbox::Xbox():Console("Xbox")
{
  conectadoXboxLive=false;  
  kinectConectado=false;
}

Xbox::~Xbox()
{
}

ostream& operator<<(ostream &output, const Xbox &p)
{
    output << "\n Marca: " << 	p.marca;
   if (p.conectadoXboxLive) 
   {
    output << "\n Conectado em XboxLive";
   }    
    return output;
}