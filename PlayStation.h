#ifndef PLAYSTATION_H
#define PLAYSTATION_H

class PlayStation: public Console
{
public:
    PlayStation();
    PlayStation(const PlayStation &p);
    
    ~PlayStation();
    void conectarPlayStationNetwork();
    
    PlayStation operator=(const PlayStation &c );
    bool operator==(const PlayStation &c );
    friend ostream &operator<<(ostream &os,PlayStation &p);
private:
    bool conectadoPlayStationNetwork;
    
};

#endif // PLAYSTATION_H
