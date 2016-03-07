#include <iostream>
#include "Console.h"
#include "MainMenu.h"
#include "Data.h"
#include <string>
using namespace std;
#include "Game.h"
#include "Xbox.h"

int main()
{
Console videogame;
videogame.ligar();
videogame.mostraMarca();
videogame.abrirBandeja();
videogame.fecharBandeja();
videogame.mostraDataDefabricacao();
//Console v2(videogame);

Console::atualizarFirmware(3);
Console::mostraVersaoFirmware();

//MainMenu menu;
//menu.menuPrincipal();


Game plants("Plants");
cout<<"\nNome do Jogo Criado: "<<plants.getNome()<<"\n"<<endl;

videogame.addJogoNaMemoria(plants);
videogame.listarJogosNaMemoria();

Xbox xb;
xb.mostraMarca();
Xbox x2(xb);
x2.mostraMarca();



}
