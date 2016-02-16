#ifndef CONSOLE_H
#define CONSOLE_H
#include <string>
using std::string;
class Console
{
private:
    bool ligado;
    string marca;
    int volume; 
    bool bandejaAberta;
    //variaveis estiticas
    static int numeroDeSerie;
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
};
#endif // CONSOLE_H
