#ifndef PLAYSTATION_H
#define PLAYSTATION_H

class PlayStation
{
public:
    PlayStation();
    ~PlayStation();
    void conectarPlayStationNetwork();
    PlayStation operator=(const PlayStation &c );
    bool operator==(const PlayStation &c );
    ostream &operator<<(ostream &os,PlayStation &p);
private:
    bool conectadoPlayStationNetwork;
    
};

#endif // PLAYSTATION_H
