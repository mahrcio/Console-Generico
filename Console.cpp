#include "console.h"
#include <string>
using std::string;
#include <iostream>
using std::cout;
#include "Game.h"

int Console::numeroDeSerie=20150203;
int Console::versaoFirmware=2;
//
Console::Console():dataDeFabricacao(Data::gerarDataAtual())
{
    ligado=false;
    marca='Desconhecida';
    volume=20;
    bandejaAberta=false;
}
Console::Console(string marca):dataDeFabricacao(Data::gerarDataAtual())
{
    ligado=false;
    this->marca=marca;
    volume=20;
    bandejaAberta=false;
}
Console::Console(const Console &console)
{
ligado=console.ligado;
marca=console.marca;
volume=console.volume;
bandejaAberta=console.bandejaAberta;
dataDeFabricacao=console.dataDeFabricacao;
}
Console::~Console()
{
}
void Console::upVolume(int up)
{
    volume=volume+up;
}
void Console::downVolume(int down)
{
    volume=volume+down;
}
void Console::ligar()
{
    if ( !ligado )
    {
        ligado = true;
        cout << "O Console foi ligado\n";
    }
    else
        cout << "Console esta ligado" << '\n';    
}
void Console::mostraMarca()
{
    cout << marca <<"\n";
}
void Console::abrirBandeja(){
if (bandejaAberta)
    cout << "\nBandeja ja esta aberta";
    else
    {
    bandejaAberta=true;
    cout << "\nBandeja foi aberta";
    }
}
void Console::fecharBandeja(){
if (bandejaAberta)
    {
    bandejaAberta=false;
    cout << "\nBandeja foi fechada";
    }
    else
    {
    cout << "\nBandeja ja esta fechada";
    }  
}
void Console::mostraDataDefabricacao()
{
    cout<<"\nD. Fab: ";
    dataDeFabricacao.mostraData();
}
void Console::atualizarFirmware(int novaVersao)
{
 versaoFirmware=novaVersao;   
}
void Console::mostraVersaoFirmware()
{
 cout<<"\nVERSAO FIRMWARE:  "<< versaoFirmware;
}

void Console::addJogoNaMemoria(const Game &novoJogo)
{
    
        if( numJogosNaMemoria != 0 )
        {
            Game * aux = new Game[ numJogosNaMemoria ];
            
            for(int i = 0; i < numJogosNaMemoria; i++)
                aux[ i ] = listaDeJogosNaMemoria[ i ];
            
            delete [ ] listaDeJogosNaMemoria;
            
            listaDeJogosNaMemoria = new Game[ ++numJogosNaMemoria ] ;
            
            for(int i = 0; i < numJogosNaMemoria-1; i++)
                listaDeJogosNaMemoria[ i ] = aux[ i ];
                
            listaDeJogosNaMemoria[ numJogosNaMemoria - 1 ] = novoJogo;
                
            delete [ ] aux;
            
        }
        else
        {
            listaDeJogosNaMemoria = new Game[++numJogosNaMemoria];
            listaDeJogosNaMemoria[0] = novoJogo;
        }
    
}
