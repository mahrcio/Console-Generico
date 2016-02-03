#ifndef CONSOLEGENERICO_H
#define CONSOLEGENERICO_H
#include <string>
using std::string;

class ConsoleGenerico
{
private:

    bool ligado;
    string marca;
    int volume; 
    static int numeroDeSerie;
    
 
public:
    ConsoleGenerico();
    ConsoleGenerico(string marca);
    ConsoleGenerico(const ConsoleGenerico &console);
    ~ConsoleGenerico();
    void upVolume(int up);
    void downVolume(int down);
    void ligar();
    void mostraMarca();

};

#endif // CONSOLEGENERICO_H
