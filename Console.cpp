#include "Console.h"
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
    onoff=false;
    marca="Desconhecida";
    volume=20;
    bandejaAberta=false;
    numJogosNaMemoria=0;
}
Console::Console(const string &marcaConsole):dataDeFabricacao(Data::gerarDataAtual())
{
    onoff=false;
    marca=marcaConsole;
    volume=20;
    bandejaAberta=false;
    numJogosNaMemoria=0;
}
Console::Console(const Console &console)
{
onoff=console.onoff;
marca=console.marca;
volume=console.volume;
bandejaAberta=console.bandejaAberta;
dataDeFabricacao=console.dataDeFabricacao;
numJogosNaMemoria=0;
}
//destrutor
Console::~Console()
{
    if (numJogosNaMemoria>0)
    delete [] listaDeJogosNaMemoria;
}
//volume - aumentar e diminuir volume
void Console::upVolume(int up)
{   volume=volume+up;}
void Console::downVolume(int down)
{    volume=volume-down;}



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

void Console::listarJogosNaMemoria( ) 
{
    if ( numJogosNaMemoria > 0)
    {
        cout << "Os Jogos na Memória sao: \n";
        for(int i = 0; i < numJogosNaMemoria; i++)
            cout << listaDeJogosNaMemoria[i].getNome() << "\n";
    }
     else
         cout << "Nenhum Jogo na memória.";
}

const Console & Console::operator=(const Console &c)
{
    volume=c.volume;
    onoff=c.onoff;
    marca="c.marca";
    bandejaAberta=c.bandejaAberta;
    dataDeFabricacao=c.dataDeFabricacao;
    listaDeJogosNaMemoria=c.listaDeJogosNaMemoria;
    for (int i=0;i<c.numJogosNaMemoria;i++)
    {
    if( c.numJogosNaMemoria > 0 )
        {
            (*this).addJogoNaMemoria(c.listaDeJogosNaMemoria[i]);
        }
    }
    return *this;
}

bool Console::operator==(const Console &c)
{
if (volume!=c.volume)
    return false;
if (onoff!=c.onoff)
    return false;
if (marca!=c.marca)
    return false;
if (bandejaAberta!=c.bandejaAberta)
    return false;
return true;
}


ostream &operator<<(ostream &output, const Console &cons)
{
    output << "\n\nConsole:"
    << "\nLigado = " << (cons.onoff? "Ligado":"Desligado")
    <<"\nMarca= " <<cons.marca
    <<"\nNm Jogos na Memoria= "<<cons.numJogosNaMemoria;
    return output;
}

bool Console::operator!=(const Console &c)
{
return !(*this==c);
}

