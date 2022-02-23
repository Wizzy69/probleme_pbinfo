#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    int n = strlen(s);
    for(int i=0;i<n;i++)
    {
        char aux[256], c[256];
        strcpy(c,s);
        strcpy(aux, c+i+1);
        strcpy(c+i,aux);
        cout << c << '\n';
    }
    return 0;
}
