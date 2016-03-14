#ifndef CONSOLE_H
#define CONSOLE_H
#include "Data.h"
#include "Game.h"
#include <string>
#include <iostream>
using namespace std;
class Console

{
 friend ostream& operator<<(ostream &output, const Console &cons);
 public:
    Console();
    Console(const string &marcaConsole);
    Console(const Console &console);
    ~Console();
    void upVolume(int up);
    void downVolume(int down);
    void ligar();
    void mostraMarca();
    void abrirBandeja();
    void fecharBandeja();
    void mostraDataDefabricacao();
    static void atualizarFirmware(int);
    static void mostraVersaoFirmware();
    void listarJogosNaMemoria();
    void addJogoNaMemoria(const Game &novoJogo);
    const Console & operator=(const Console &c);
    bool operator==(const Console &c);
    
protected:
    bool ligado;
    string marca;
    int volume; 
    bool bandejaAberta;
    Data dataDeFabricacao;
    Game *listaDeJogosNaMemoria;
    int numJogosNaMemoria;
    
    //variaveis estaticas
    static int numeroDeSerie;
    static int versaoFirmware;
    //const estaticas
    static const double VOLUMEMAXIMO=100;
    
};
#endif // CONSOLE_H
