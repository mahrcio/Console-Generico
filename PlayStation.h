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
    
    const PlayStation & operator=(const PlayStation &c );
    bool operator==(const PlayStation &c );
    bool operator!=(const PlayStation &c);
    
private:
    bool conectadoPlayStationNetwork;
    
};

#endif // PLAYSTATION_H
