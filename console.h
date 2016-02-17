#ifndef CONSOLE_H
#define CONSOLE_H
#include "Data.h"
#include <string>
using std::string;
class Console
{
private:
    bool ligado;
    string marca;
    int volume; 
    bool bandejaAberta;
    Data dataDeFabricacao;
    //variaveis estiticas
    static int numeroDeSerie;
    static int versaoFirmware;
    static const double VOLUMEMAXIMO=100;
    
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
    static void atualizarFirmware(int);
    static void mostraVersaoFirmware();
};
#endif // CONSOLE_H
