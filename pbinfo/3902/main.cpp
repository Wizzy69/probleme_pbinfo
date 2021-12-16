#include <iostream>
#include <fstream>
using namespace std;

int scif(int x)
{
    int s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void sortare(int a[], int s[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n; j++)
        {
            if (s[i] > s[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;

                aux = s[i];
                s[i] = s[j];
                s[j] = aux;
            }
            else if (s[i] == s[j])
                if (a[i] < a[j])
                {
                    int aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
                }
        }
}

int main()
{
    ifstream fin("sortsum.in");
    ofstream fout("sortsum.out");
    int x;
    int k = 0;
    int v[999999];
    int s[999999];
    while (fin >> x)
        v[k] = x, s[k] = scif(x), k++;

    sortare(v, s, k);
    for (int i = 0; i < k; i++)
        fout << v[i] << " ";
   
    return 0;
}