#ifndef PLAYSTATION_H
#define PLAYSTATION_H
#include <iostream>
using namespace std;
#include "Console.h"

class PlayStation : public Console
{
friend ostream& operator<<(ostream &output, const PlayStation &p);
public:
    PlayStation();
    PlayStation(const PlayStation &ps);
    
    ~PlayStation();
    void conectarPlayStationNetwork();
    virtual void ligar();
    const PlayStation & operator=(const PlayStation &c );
    bool operator==(const PlayStation &c );
    bool operator!=(const PlayStation &c);
    
protected:
    bool conectadoPlayStationNetwork;
    bool ligadoNaTomada;
};

#endif // PLAYSTATION_H
