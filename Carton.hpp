#ifndef CARTON_HPP
#define CARTON_HPP

#include "Componenta.hpp"

class Carton : public Componenta
{
    int Numar_B;
    int Lungime;
    int Latime;

public:
    Carton();
    Carton(int, int, int);
    Carton(ifstream &);
    const char *getNComponenta();
    ~Carton();
    double getA();
    double getGrosime_P();
    int getNumar_B();
    int getL();
};

#endif