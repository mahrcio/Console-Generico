#include <iostream>
#include "Console.h"
#include "Data.h"
#include <string>
using namespace std;
#include "Game.h"
#include "Xbox.h"
#include "PSP.h"

int main()
{
Console videogame2,m2;
videogame2.ligar();
videogame2.mostraMarca();
videogame2.abrirBandeja();
videogame2.fecharBandeja();
videogame2.mostraDataDefabricacao();

Console::atualizarFirmware(3);
Console::mostraVersaoFirmware();

Game plants("Plants");
videogame2.addJogoNaMemoria(plants);
videogame2.listarJogosNaMemoria();

Console vd(videogame2);
if (videogame2==vd)
    cout<<"OK";
    




}
