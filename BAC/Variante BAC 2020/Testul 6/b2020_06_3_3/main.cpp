#include <iostream>
#include <fstream>
using namespace std;

/*
    Algoritmul citeste numerele din fisier si calculeaza frecventa lor in sir in vectorul fr
    Vectorul fr este este declarat de 1000 de elemente deoarece, numerele sunt din intervalul [1, 10^3],
    astfel pana la 10^6 (numarul maxim de numere care se citesc din fisier), in mod sigur numerele citite
    se vor repeta.

    Algoritmul, dupa aceea, verifica frecventa, iar daca frecventa a mai mult de un numar este impara atunci
    este clar ca numerele din sir nu pot fi rearanjate pentru a forma un sir palindromic     
*/

int main()
{
    int fr[1000] = {0};
    ifstream fin("bac.in");

    int n = 0;
    int x;
    while (fin >> x)
        fr[x]++;

    int ok = 0;
    for (int i = 1; i <= 1000 && ok < 2; ++i)
    {
        if (fr[i] % 2 != 0)
            ok++;
    }

    if (ok == 0 || ok == 1)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}