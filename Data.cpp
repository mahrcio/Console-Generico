#include "Data.h"
#include <ctime>
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

void Data::gerarData(){
  
time_t now = time(0);
tm *ltm = localtime(&now);
dia=ltm->tm_mday;
mes=ltm->tm_mon;
ano=ltm->tm_year;
  
  
}