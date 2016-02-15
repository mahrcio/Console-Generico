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
    static int numeroDeSerie;
    
 
public:
    Console();
    Console(string marca);
    Console(const Console &console);
    ~Console();
    void upVolume(int up);
    void downVolume(int down);
    void ligar();
    void mostraMarca();

};

#endif // CONSOLE_H