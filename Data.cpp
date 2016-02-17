#include "Data.h"
#include <iostream>
using std::cout;

Data::Data()
{
    dia=1;
    mes=1;
    ano=1900;
}
Data::Data(int d, int m, int a)
{
if (d<=DIAMAXIMO){
    if (m<=MESMAXIMO){
        dia=d;
        mes=m;
        ano=a;
        }
    }
}
void Data::mostraData()
{
cout<<dia<<"/"<<mes<<"/"<<ano;    
}

Data::~Data()
{
}

