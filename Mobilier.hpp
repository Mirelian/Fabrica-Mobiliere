#ifndef MOBILIER_HPP
#define MOBILIER_HPP

#include "Carton.hpp"
#include "Pal.hpp"
#include "Picioare.hpp"
#include "Usi.hpp"
#include "Sertare.hpp"
#include "Bare.hpp"
#include "Polite.hpp"

class Mobilier
{
    int Numar_C;
    char *Nume_M;
    Componenta **C;

public:
    Mobilier();
    Mobilier(ifstream &);
    void AddComponenta(ifstream &, const char *, int);
    double *Arie();
    ~Mobilier();
    int getManere();
    int outSine(ofstream &);
};

#endif