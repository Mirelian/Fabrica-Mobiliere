#ifndef USI_HPP
#define USI_HPP

#include "Componenta.hpp"

class Usi : public Componenta
{
    int Numar_B;
    int Inaltime;
    int Latime;
    double Grosime_P;

public:
    Usi();
    Usi(int, int, int, double);
    Usi(ifstream &);
    const char *getNComponenta();
    ~Usi();
    double getA();
    double getGrosime_P();
    int getNumar_B();
    int getL();
};

#endif