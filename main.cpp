#include <iostream>
using std::cout;
#include "Console.h"
#include "MainMenu.h"
#include "Data.h"
#include <string>
using namespace std;
#include "Game.h"

int main()
{
Console videogame("Sony");
videogame.ligar();
videogame.mostraMarca();
videogame.abrirBandeja();
videogame.fecharBandeja();
videogame.mostraDataDefabricacao();
Console v2(videogame);

Console::atualizarFirmware(3);
Console::mostraVersaoFirmware();

//MainMenu menu;
//menu.menuPrincipal();


Game plants("Plants");
cout<<"\nNome do Jogo Criado: "<<plants.getNome()<<"\n"<<endl;

videogame.addJogoNaMemoria(plants);
videogame.listarJogosNaMemoria();

if (videogame==v2);
    cout<<"Iguais";

}
