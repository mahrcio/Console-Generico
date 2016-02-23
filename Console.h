#ifndef CONSOLE_H
#define CONSOLE_H
#include "Data.h"
#include "Game.h"
#include "Hd.h"
#include <string>
using std::string;
class Console
{
 public:
    Console();
    Console(string marca);
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
    
    
private:
    bool ligado;
    string marca;
    int volume; 
    bool bandejaAberta;
    Data dataDeFabricacao;
    Hd hd;
    Game *listaDeJogosNaMemoria;
    int numJogosNaMemoria;
    
    //variaveis estiticas
    static int numeroDeSerie;
    static int versaoFirmware;
    //const estaticas
    static const double VOLUMEMAXIMO=100;
    
};
#endif // CONSOLE_H
