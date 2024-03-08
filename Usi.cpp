#include "Usi.hpp"

Usi::Usi()
{
    Numar_B = 0;
    Inaltime = 0;
    Latime = 0;
    Grosime_P = 0;
}

Usi::Usi(int b, int h, int l, double g)
{
    Numar_B = b;
    Inaltime = h;
    Latime = l;
    Grosime_P = g;
}

Usi::Usi(ifstream &f)
{
    f >> Numar_B;
    f >> Inaltime;
    f >> Latime;
    f >> Grosime_P;
}

const char *Usi::getNComponenta()
{
    return "Usi";
}

double Usi::getA()
{
    return (double)Numar_B * Inaltime * Latime / 10000;
}

double Usi::getGrosime_P()
{
    return Grosime_P;
}

Usi::~Usi()
{
}

int Usi::getNumar_B()
{
    return Numar_B;
}

int Usi::getL()
{
    return Inaltime;
}