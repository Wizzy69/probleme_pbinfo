#include <iostream>

using namespace std;

bool nrvoc(char *s, int k)
{
    int n = strlen(s);
    for(int i=0; i<n; i++)
        if(strchr("aeiou", s[i]) != 0)
            k--;
    return k == 0;
}

int main()
{
    ///n cuvinte
    /// afis cuv care au k vocale (ord dupa lungime)

    int n,na = 0,k;
    char a[15][11], c[15][11];
    cin>> n;
    cin.get();
    for(int i=0; i<n; i++)
        cin >> c[i];
    cin>>k;
    for(int i=0; i<n; i++)
        if(nrvoc(c[i], k))
            strcpy(a[na++], c[i]);
    for(int i=0; i<na-1; i++)
        for(int j=i+1; j<na; j++)
            if(strlen(a[i]) < strlen(a[j]))
            {
                char aux[11];
                strcpy(aux, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], aux);
            }

    for(int i=0;i<na;i++)
        cout << a[i] << "\n";
    return 0;


    ///tema -> v70 - v40 ( joi )
}
