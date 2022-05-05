/**
Subiectul 2:
1. a
2. b
3. (1,4,3)
    [14], [43]
4. n=0;
for(i=1;i<=11;i++)
{
    cin>>s;
    if(strcmp("are", s+strlen(s)-3) == 0)
        n++;
}

5.
*/

#include <iostream>

using namespace std;

double media(double a[51][50], int n, int col)
{
    double s = 0.0;
    int nr = 0;
    for (int i = 0; i < n; i++)
        s += a[i][col], nr++;

    s -= a[n / 2][col];
    nr--;

    return s / (nr);
}

void deplasare(double a[51][50], int &n)
{
    n++;
    int mij = n / 2;

    for (int i = n - 1; i > mij; i--)
        for (int j = 0; j < n - 1; j++)
            a[i][j] = a[i - 1][j];
    for (int j = 0; j < n - 1; j++)
        a[mij][j] = media(a, n, j);
}

int main()
{
    double a[51][50];
<<<<<<< HEAD
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    deplasare();
=======
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    deplasare(a, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
>>>>>>> 88efc3b7e0fdd4a182581a84ab911e7b010c8686
    return 0;
}
