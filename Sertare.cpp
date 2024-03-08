#include "Sertare.hpp"

Sertare::Sertare()
{
    Numar_B = 0;
    D = 0;
    W = 0;
    H = 0;
    Grosime_P = 0;
}

Sertare::Sertare(int b, int d, int w, int h, double g)
{
    Numar_B = b;
    D = d;
    W = w;
    H = h;
    Grosime_P = g;
}

Sertare::Sertare(ifstream &f)
{
    f >> Numar_B;
    f >> D;
    f >> W;
    f >> H;
    f >> Grosime_P;
}

const char *Sertare::getNComponenta()
{
    return "Sertare";
}

double Sertare::getA()
{
    return (double)Numar_B * (D * W + D * H * 2 + W * H * 2) / 10000;
}

double Sertare::getGrosime_P()
{
    return Grosime_P;
}

Sertare::~Sertare()
{
}

int Sertare::getNumar_B()
{
    return Numar_B;
}

int Sertare::getL()
{
    return D;
}