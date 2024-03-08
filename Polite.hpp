#ifndef POLITE_HPP
#define POLITE_HPP

#include "Componenta.hpp"

class Polite : public Componenta
{
    int Numar_B;
    int Lungime;
    int Latime;
    double Grosime_P;

public:
    Polite();
    Polite(int, int, int, double);
    Polite(ifstream &);
    const char *getNComponenta();
    ~Polite();
    double getA();
    double getGrosime_P();
    int getNumar_B();
    int getL();
};

#endif