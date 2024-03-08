#ifndef PAL_HPP
#define PAL_HPP

#include "Componenta.hpp"

class Pal : public Componenta
{
    int Numar_B;
    int Lungime;
    int Latime;
    double Grosime_P;

public:
    Pal();
    Pal(int, int, int, double);
    Pal(ifstream &);
    const char *getNComponenta();
    ~Pal();
    double getA();
    double getGrosime_P();
    int getNumar_B();
    int getL();
};

#endif