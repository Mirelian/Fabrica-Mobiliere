#include "Mobilier.hpp"

int main()
{
    Mobilier **M;
    ifstream Inp("input.txt");
    int n;
    Inp >> n;

    M = new Mobilier *[n];
    for (int i = 0; i < n; i++)
        M[i] = new Mobilier(Inp);

    ofstream Out("output.txt");
    double *A = M[0]->Arie();
    for (int i = 1; i < n; i++)
    {
        double *aux = M[i]->Arie();
        for (int j = 0; j < 3; j++)
            A[j] = A[j] + aux[j];
        delete[] aux;
    }
    Out << A[0] << " m2 de 1.6" << endl;
    Out << A[1] << " m2 de 1.8" << endl;
    Out << A[2] << " m2" << endl;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        m = m + M[i]->getManere();
    }
    Out << m << endl;
    int maxP = 1;
    double *aux1 = M[0]->Arie();
    for (int i = 1; i < n; i++)
    {
        double *aux2 = M[i]->Arie();
        if (aux1[0] + aux1[1] < aux2[0] + aux2[1])
        {
            maxP = i + 1;
            delete[] aux1;
            aux1 = aux2;
        }
        else
            delete[] aux2;
    }
    delete[] aux1;
    Out << maxP << endl;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = k + M[i]->outSine(Out);
    }
    if (k == 0)
        Out << 0 << endl;
    Out << ceil(A[2] / (4 * 3)) << endl;
    Out << ceil(A[0] / (6 * 4)) << " de 1.6" << endl;
    Out << ceil(A[1] / (6 * 4)) << " de 1.8" << endl;
    Inp.close();
    Out.close();
    for (int i = 0; i < n; i++)
    {
        delete M[i];
    }
    delete[] M;
    return 0;
}