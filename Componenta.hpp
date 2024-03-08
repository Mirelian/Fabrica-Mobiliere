#ifndef COMPONENTA_HPP
#define COMPONENTA_HPP

#include <iostream>
using namespace std;
#include <cstring>
#include <fstream>
#include <cmath>

class Componenta
{
public:
    virtual ~Componenta() = 0;
    virtual const char *getNComponenta() = 0;
    virtual double getA() = 0;
    virtual double getGrosime_P() = 0;
    virtual int getNumar_B() = 0;
    virtual int getL() = 0;
};

#endif