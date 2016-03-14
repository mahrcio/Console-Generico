#ifndef PSP_H
#define PSP_H
#include "PlayStation.h"
class Psp : public PlayStation
{
friend ostream& operator<<(ostream &output, const Psp &p);
public:
    Psp();
    Psp(const Psp &p);
    ~Psp();
    
    const Psp & operator=(const Psp &p );
    bool operator==(const Psp &c );
    bool operator!=(const Psp &c);
    
    
private:
    int densidade_pixel;
};

#endif // PSP_H
