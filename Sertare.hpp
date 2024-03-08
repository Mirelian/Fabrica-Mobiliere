#ifndef SERTARE_HPP
#define SERTARE_HPP

#include "Componenta.hpp"

class Sertare : public Componenta
{
    int Numar_B;
    int D, W, H;
    double Grosime_P;

public:
    Sertare();
    Sertare(int, int, int, int, double);
    Sertare(ifstream &);
    const char *getNComponenta();
    ~Sertare();
    double getA();
    double getGrosime_P();
    int getNumar_B();
    int getL();
};

#endif