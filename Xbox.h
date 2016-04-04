#ifndef XBOX_H
#define XBOX_H
#include <iostream>
using namespace std;
#include "Console.h"
class Xbox: public Console
{
friend ostream& operator<<(ostream &output, const Xbox &xbox);
public:
    Xbox();
    Xbox(const Xbox &x);
    
    ~Xbox();
    void conectarXboxLive();
    void playMusic();
    virtual void ligar();
    const Xbox & operator=(const Xbox &x );
    bool operator==(const Xbox &c );
    bool operator!=(const Xbox &c);

protected:
    bool conectadoXboxLive;
    bool kinectConectado;
    bool ligadoNaTomada;
};

#endif // XBOX_H
