#include "Picioare.hpp"

Picioare::Picioare()
{
    Numar_B = 0;
    Inaltime = 0;
}

Picioare::Picioare(int b, int h)
{
    Numar_B = b;
    Inaltime = h;
}

Picioare::Picioare(ifstream &f)
{
    f >> Numar_B;
    f >> Inaltime;
}

const char *Picioare::getNComponenta()
{
    return "Picioare";
}

double Picioare::getA()
{
    return 0;
}

double Picioare::getGrosime_P()
{
    return 0;
}

Picioare::~Picioare()
{
}

int Picioare::getNumar_B()
{
    return Numar_B;
}

int Picioare::getL()
{
    return Inaltime;
}
