#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m;
    ifstream fin("interclasare3.in");
    ofstream fout("interclasare3.out");
    fin >> n >> m;
    int *a = new int[n];
    int *b = new int[m];
    for (int i = 0; i < n; i++)
        fin >> a[i];
    for (int i = 0; i < m; i++)
        fin >> b[i];
    int i, j;
    int p;
    i = p = 0;
    j = m-1;
    while (i < n && j >= 0)
    {
        if (a[i] < b[j])
        {
            if (a[i] % 2 == 0)
            {
                fout << a[i] << " ";
                p++;
                if (p == 20)
                {
                    fout << '\n';
                    p = 0;
                }
            }
            i++;
        }
        else if (a[i] > b[j])
        {
            if (b[j] % 2 == 0)
            {
                fout << b[j] << " ";
                p++;
                if (p == 20)
                {
                    fout << '\n';
                    p = 0;
                }
            }
            j--;
        }
        else
        {
            if (a[i] % 2 == 0)
            {
                p++;
                fout << a[i] << " " << b[j] << " ";
                if (p == 20)
                {
                    fout << '\n';
                    p = 0;
                }
            }
            i++;
            j--;
        }
    }

    while(i<n)
    {
        if(a[i]%2==0)
        {
            fout << a[i] << " ";
            p++;
            if(p==20) {
                fout << "\n";
                p = 0;
            }
        }
        i++;
    }

    while (j >= 0)
    {
        if (b[j] % 2 == 0)
        {
            fout << b[j] << " ";
            p++;
            if (p == 20)
            {
                fout << "\n";
                p = 0;
            }
        }
        j--;
    }
}