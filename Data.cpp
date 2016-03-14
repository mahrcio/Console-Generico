#include "Data.h"
#include <ctime>
#include <iostream>
using namespace std;

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

Data::Data(const Data &data)
{
dia=data.dia;
mes=data.mes;
ano=data.ano;
}
void Data::mostraData()
{
cout<<"\n"<<dia<<"/"<<mes<<"/"<<ano;    
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

ostream &operator<<(ostream &output, const Data &dat)
{
    output <<"\nData= "<<dat.dia<<"/"<<dat.mes<<"/"<<dat.ano;    
    return output;
}

bool Data::operator==(const Data &d)
{
if (dia!=d.dia)
        return false;
if (mes!=d.mes)
        return false;
if (ano!=d.ano)
        return false;
return true;
}

const Data & Data::operator=(const Data &d)
{
 dia=d.dia;
 mes=d.mes;
 ano=d.ano;
    return *this;
}

bool Data::operator!=(const Data &c)
{
return !(*this==c);
}