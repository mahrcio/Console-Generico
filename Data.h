#ifndef DATA_H
#define DATA_H
#include <iostream>
using namespace std;

class Data
{
friend ostream& operator<<(ostream &output, const Data &dat);
public:
    Data();
    ~Data();
    Data(int,int,int);
    Data(const Data &data);
    void mostraData();
    static Data gerarDataAtual();
private:
static const int DIAMAXIMO=31;
static const int MESMAXIMO=12;

    int dia;
    int mes;
    int ano;
};

#endif // DATA_H