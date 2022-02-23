#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[21], aux[21], voc[] = "aeiou", clona[21];
    cin>>a;
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        strcpy(clona,a);
        int ok=0;
        for(int j=0;j<strlen(clona);j++)
            if(voc[i] == clona[j])
                ok=1,
                strcpy(aux, clona+j+1),
                strcpy(clona+j,aux),
                j--;
        if(ok)
            cout << clona << "\n";
    }
    return 0;
}
