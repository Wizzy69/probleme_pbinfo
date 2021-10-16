#include <iostream>
using namespace std;

int sub(int v[100], int n, int a)
{
    int nr = 0;
    for (int i = 0; i < n; i++)
        if (v[i] < a)
            nr++;
    return nr;
}

int main()
{
    int n,v[100];
    cin >> n;

    for (int i = 0; i < n;i++)
        cin >> v[i];

    int ok = 1;
    for (int i = 0; i < n - 1;i++)
        for (int j = i+1; j < n;j++)
            if(sub(v,n,v[i]) == sub(v,n,v[j]))
                ok = 0;
    if(ok==1)
        cout << "Da";
    else
        cout << "Nu";
}