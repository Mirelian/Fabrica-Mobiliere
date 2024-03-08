#include "Pal.hpp"

Pal::Pal()
{
    Numar_B = 0;
    Lungime = 0;
    Latime = 0;
    Grosime_P = 0;
}

Pal::Pal(int b, int h, int l, double g)
{
    Numar_B = b;
    Lungime = h;
    Latime = l;
    Grosime_P = g;
}

Pal::Pal(ifstream &f)
{
    f >> Numar_B;
    f >> Lungime;
    f >> Latime;
    f >> Grosime_P;
}

const char *Pal::getNComponenta()
{
    return "Pal";
}

double Pal::getA()
{
    return (double)Numar_B * Lungime * Latime / 10000;
}

double Pal::getGrosime_P()
{
    return Grosime_P;
}

Pal::~Pal()
{
}

int Pal::getNumar_B()
{
    return Numar_B;
}

int Pal::getL()
{
    return Lungime;
}
