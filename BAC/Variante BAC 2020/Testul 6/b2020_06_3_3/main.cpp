#include <iostream>
#include <fstream>
using namespace std;

/*
    Am folosit un vector de frecventa, o variabila simpla x, in care citesc, pe rand, numerele date in fisier si o variabila simpla, numita 'ok' pentru a verifica daca
    sirul dat contine mai multe numere care au numarul de aparitii un numar impar.

    Algoritmul citeste numerele din fisier si calculeaza frecventa lor in sir in vectorul fr
    Vectorul fr este este declarat de 1000 de elemente deoarece, numerele sunt din intervalul [1, 10^3],
    astfel pana la 10^6 (numarul maxim de numere care se citesc din fisier), in mod sigur numerele citite
    se vor repeta.
    Algoritmul, dupa aceea, verifica frecventa, iar daca frecventa a mai mult de un numar este impara atunci
    este clar ca numerele din sir nu pot fi rearanjate pentru a forma un sir palindromic     

    Algoritmul este eficient din punct de vedere al timpului de executare deoarece parcurge o singura data vectorul de frecventa, iar daca gaseste mai mult de doua numere
    care sunt impare, atunci iese fortat de pe for, in functie de variabila ok. Iar daca for-ul ajunge sa fie parcurs in totalitate, orium numarul de pasi este maxim jumatate din 
    totalul de numere care pot exista in fisier.
*/

int main()
{
    int fr[1000] = {0};
    ifstream fin("bac.in");

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