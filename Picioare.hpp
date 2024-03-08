#ifndef PICIOARE_HPP
#define PICIOARE_HPP

#include "Componenta.hpp"

class Picioare : public Componenta
{
    int Numar_B;
    int Inaltime;

public:
    Picioare();
    Picioare(int, int);
    Picioare(ifstream &);
    const char *getNComponenta();
    ~Picioare();
    double getA();
    double getGrosime_P();
    int getNumar_B();
    int getL();
};

#endif