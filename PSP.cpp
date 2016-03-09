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

/*
ostream& operator<<(ostream &output, const Psp &p)
{
    output << "\n Dens. Pixel: " << 	p.densidade_pixel;
    return output;
}
*/
const Psp & Psp::operator=(const Psp &p)
{
    static_cast <PlayStation&> (*this) = static_cast <PlayStation> (p);
    densidade_pixel=p.densidade_pixel; 
    return *this;
}


ostream &operator<<(ostream &output, const Psp &p)
{
    output << static_cast< PlayStation > (p)
    << "\n>> Dens. Pixel = " << p.densidade_pixel;
    
    return output;
}


