#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data();
    ~Data();
    Data(int,int,int);
    void mostraData();
private:
static const int DIAMAXIMO=31;
static const int MESMAXIMO=12;

    int dia;
    int mes;
    int ano;
};

#endif // DATA_H
