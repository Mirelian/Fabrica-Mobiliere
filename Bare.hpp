#ifndef BARE_HPP
#define BARE_HPP

#include "Componenta.hpp"

class Bare : public Componenta
{
    int Numar_B;
    int Lungime;

public:
    Bare();
    Bare(int, int);
    Bare(ifstream &);
    const char *getNComponenta();
    ~Bare();
    double getA();
    double getGrosime_P();
    int getNumar_B();
    int getL();
};

#endif