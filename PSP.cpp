#include "PSP.h"
#include "PlayStation.h"
Psp::Psp():PlayStation()
{
densidade_pixel=250;
}

Psp::Psp(const Psp &p):PlayStation(static_cast<PlayStation>(p))
{
densidade_pixel=p.densidade_pixel;
}
Psp::~Psp()
{
}


const Psp & Psp::operator=(const Psp &p)
{
    static_cast <PlayStation&> (*this) = static_cast <PlayStation> (p);
    densidade_pixel=p.densidade_pixel; 
    return *this;
}


ostream &operator<<(ostream &output, const Psp &p)
{
    output << static_cast< PlayStation > (p)
    << "\nDens. Pixel = " << p.densidade_pixel;
    
    return output;
}

bool Psp::operator==(const Psp &c)
{
if (static_cast <PlayStation> (*this) != static_cast <PlayStation> (c))
        return false;
if (densidade_pixel!=c.densidade_pixel)
        return false;
return true;
}

bool Psp::operator!=(const Psp &c)
{
return !(*this==c);
}


void Psp::ligar()
{
if (nivelBateria>0) {
  if ( !onoff )
    {
        onoff = true;
        cout << "O PSP foi ligado\n";
    }
    else
        cout << "PSP esta ligado" << '\n';    
}
}
