#include "Polite.hpp"

Polite::Polite()
{
    Numar_B = 0;
    Lungime = 0;
    Latime = 0;
    Grosime_P = 0;
}

Polite::Polite(int b, int h, int l, double g)
{
    Numar_B = b;
    Lungime = h;
    Latime = l;
    Grosime_P = g;
}

Polite::Polite(ifstream &f)
{
    f >> Numar_B;
    f >> Lungime;
    f >> Latime;
    f >> Grosime_P;
}

const char *Polite::getNComponenta()
{
    return "Polite";
}

double Polite::getA()
{
    return (double)Numar_B * Lungime * Latime / 10000;
}

double Polite::getGrosime_P()
{
    return Grosime_P;
}

Polite::~Polite()
{
}

int Polite::getNumar_B()
{
    return Numar_B;
}

int Polite::getL()
{
    return Lungime;
}