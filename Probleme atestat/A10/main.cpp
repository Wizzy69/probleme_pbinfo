#include <iostream>
#include <fstream>
using namespace std;

void citire(int &n, int a[])
{
    ifstream fin("sort.in");
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> a[i];
}

void insertie(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int aux = a[i];
        int j = i - 1;
        while (j >= 0 && aux < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = aux;
    }
}

void swap(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

void insertie2(int n, int v[])
{
    for (int i = 1; i < n;i++)
    {
        int j = i - 1;
        while(j>=0 && v[j] > v[j+1])
        {
            swap(v[j], v[j + 1]);
            j--;
        }
    }
}

void afisare(int a[], int n)
{
    ofstream fout("sort.out");
    for (int i = 0; i < n; i++)
        fout << a[i] << " ";
}

int main()
{
    int n;
    int a[50];

    citire(n, a);
    insertie(a, n);
    afisare(a, n);

    return 0;
}