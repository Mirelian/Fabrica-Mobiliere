#include "Mobilier.hpp"

Mobilier::Mobilier()
{
    Numar_C = 0;
    Nume_M = NULL;
    C = NULL;
}

Mobilier::Mobilier(ifstream &f)
{
    char aux[20];
    f >> aux;
    Nume_M = new char[strlen(aux) + 1];
    strcpy(Nume_M, aux);
    f >> Numar_C;
    C = new Componenta *[Numar_C];
    for (int i = 0; i < Numar_C; i++)
    {
        f >> aux;
        (*this).AddComponenta(f, aux, i);
    }
}

void Mobilier::AddComponenta(ifstream &f, const char *N, int p)
{
    if (strcmp(N, "Carton") == 0)
    {
        C[p] = new Carton(f);
    }
    else if (strcmp(N, "Pal") == 0)
    {
        C[p] = new Pal(f);
    }
    else if (strcmp(N, "Picioare") == 0)
    {
        C[p] = new Picioare(f);
    }
    else if (strcmp(N, "Usi") == 0)
    {
        C[p] = new Usi(f);
    }
    else if (strcmp(N, "Bare") == 0)
    {
        C[p] = new Bare(f);
    }
    else if (strcmp(N, "Polite") == 0)
    {
        C[p] = new Polite(f);
    }
    else if (strcmp(N, "Sertare") == 0)
    {
        C[p] = new Sertare(f);
    }
}

Mobilier::~Mobilier()
{
    delete[] Nume_M;
    for (int i = 0; i < Numar_C; i++)
        delete C[i];
    delete[] C;
}

double *Mobilier::Arie()
{
    double *A;
    A = new double[3];
    for (int i = 0; i < 3; i++)
        A[i] = 0;
    double g;
    for (int i = 0; i < Numar_C; i++)
    {
        g = C[i]->getGrosime_P();
        if (g == 1.6)
        {
            A[0] = A[0] + C[i]->getA();
        }
        else if (g == 1.8)
        {
            A[1] = A[1] + C[i]->getA();
        }
        else
            A[2] = A[2] + C[i]->getA();
    }
    for (int i = 0; i < 3; i++)
        A[i] = ceil(A[i] * 100) / 100;
    return A;
}

int Mobilier::getManere()
{
    int m = 0;
    for (int i = 0; i < Numar_C; i++)
        if (strcmp(C[i]->getNComponenta(), "Usi") == 0 || strcmp(C[i]->getNComponenta(), "Sertare") == 0)
            m = m + C[i]->getNumar_B();
    return m;
}

int Mobilier::outSine(ofstream &f)
{
    int k = 0;
    for (int i = 0; i < Numar_C; i++)
    {
        if (strcmp(C[i]->getNComponenta(), "Sertare") == 0)
        {
            f << 2 * C[i]->getNumar_B() << " " << C[i]->getL() << endl;
            k = 1;
        }
    }
    return k;
}