#include "Carton.hpp"

Carton::Carton()
{
    Numar_B = 0;
    Lungime = 0;
    Latime = 0;
}

Carton::Carton(int b, int h, int l)
{
    Numar_B = b;
    Lungime = h;
    Latime = l;
}

Carton::Carton(ifstream &f)
{
    f >> Numar_B;
    f >> Lungime;
    f >> Latime;
}

double Carton::getA()
{
    return (double)Numar_B * Lungime * Latime / 10000;
}

double Carton::getGrosime_P()
{
    return 0;
}

Carton::~Carton()
{
}

const char *Carton::getNComponenta()
{
    return "Carton";
}

int Carton::getNumar_B()
{
    return Numar_B;
}

int Carton::getL()
{
    return Lungime;
}
