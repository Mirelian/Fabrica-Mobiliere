#include "Bare.hpp"

Bare::Bare()
{
    Numar_B = 0;
    Lungime = 0;
}

Bare::Bare(int b, int h)
{
    Numar_B = b;
    Lungime = h;
}

Bare::Bare(ifstream &f)
{
    f >> Numar_B;
    f >> Lungime;
}

const char *Bare::getNComponenta()
{
    return "Bare";
}

double Bare::getA()
{
    return 0;
}

double Bare::getGrosime_P()
{
    return 0;
}

Bare::~Bare()
{
}

int Bare::getNumar_B()
{
    return Numar_B;
}

int Bare::getL()
{
    return Lungime;
}
