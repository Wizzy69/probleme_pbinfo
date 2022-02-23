#include <iostream>

using namespace std;
/**
strcmp(a,b) = 0 -> a=b (identice)
            > 0 -> a>b
            < 0 -> a<b

strcmp(mate,info) > 0 (m>i)
strcmp(abc,abd) < 0 (a=a, b=b, c < d)

for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
        if(strcmp(a[i],a[j])>0) // sortare lexicografica
        {
            char t[200];
            strcpy(t,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],t);
        }
*/

/**
Se citesc n cuv (fiecarecu 15 chr lit mici)
Afisati cel mai lung cuvant, iar daca exista mai multe cuv de lungime maxima,
memorati cel mai mic cuv ord lexicografic crescator
*/
int main()
{
    char c[16],cmax[16];
    int lmax = 0,n;
    cin>>n;
    cin.get();
    for(int i=0; i<n; i++)
    {
        cin>>c;
        int lc = strlen(c);
        if(lc > lmax)
            strcpy(cmax,c), lmax = lc;
        else if(lc == lmax && strcmp(c,cmax) < 0)
            strcpy(cmax,c);

    }

    cout << cmax << " " << lmax;
    return 0;
}
