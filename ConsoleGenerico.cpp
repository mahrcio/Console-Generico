#include "ConsoleGenerico.h"
#include <string>
using std::string;
#include <iostream>
using std::cout;

int ConsoleGenerico::numeroDeSerie=20150203;

ConsoleGenerico::ConsoleGenerico()
{
    ligado=false;
    marca='Desconhecida';
    volume=20;
}

ConsoleGenerico::ConsoleGenerico(string marca)
{
    ligado=false;
    this->marca=marca;
    volume=20;
    
}

ConsoleGenerico::ConsoleGenerico(const ConsoleGenerico &console)
{
ligado=console.ligado;
marca=console.marca;
volume=console.volume;
 
   
}

ConsoleGenerico::~ConsoleGenerico()
{
}


void ConsoleGenerico::upVolume(int up)
{
    volume=volume+up;
}
    
void ConsoleGenerico::downVolume(int down)
{
    volume=volume+down;
}


void ConsoleGenerico::ligar()
{
    if ( !ligado )
    {
        ligado = true;
        cout << "O Console foi ligado\n";
    }
    else
        cout << "Console esta ligado" << '\n';    
}

void ConsoleGenerico::mostraMarca()
{
    cout << marca <<"\n";
}