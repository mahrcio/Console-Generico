#ifndef CONSOLE_H
#define CONSOLE_H
#include "Data.h"
#include "Game.h"
#include <string>
#include <iostream>
#include "Device.h"
using namespace std;
class Console: public Device

{
 friend ostream& operator<<(ostream &output, const Console &cons);
 public:
    Console();
    Console(const string &marcaConsole);
    Console(const Console &console);
    ~Console();
    void upVolume(int up);
    void downVolume(int down);
    virtual void ligar()=0;
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
    bool operator!=(const Console &c);
    
protected:
   // bool ligado;
    bool bandejaAberta;
    string marca;
    int volume;
    int numJogosNaMemoria;
    Data dataDeFabricacao;
    Game *listaDeJogosNaMemoria;
    
    
    //variaveis estaticas
    static int numeroDeSerie;
    static int versaoFirmware;
    //const estaticas
    static const double VOLUMEMAXIMO=100;
    
};
#endif // CONSOLE_H
