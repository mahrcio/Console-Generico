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
cout<<"\n"<<dia<<"/"<<mes<<"/"<<ano;    
}
Data::Data(const Data &data)
{
dia=data.dia;
mes=data.mes;
ano=data.ano;
}
Data::~Data()
{
}

Data Data::gerarDataAtual()
{
time_t now = time(0);
tm *ltm = localtime(&now);
int diaAtual=ltm->tm_mday;
int mesAtual=ltm->tm_mon;
int anoAtual=ltm->tm_year+1900;
Data dataAtual(diaAtual,mesAtual,anoAtual);
return dataAtual;
}