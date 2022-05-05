/*
Subiectul 2:
    1. d
    2. b
    3.

    struct meteo
    {
        int luna;
        int an;
        double temperatura[15];
    }m;

    4.
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            if(i+j==8 || i+j=7 || i+j==9)
                a[i][j] = 8;
            else a[i][j] = 1;
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], a[101][101];
    cin.getline(s, 101);
    int k = 0;
    for (char *p = strtok(s, " "); p; p = strtok(0, " "))
        strcpy(a[k++], p);

    for (int i = 0; i < k; i++)
        if (strlen(a[i]) % 2 == 1)
            for (int j = 0; j < k; j++)
            {
                int li = strlen(a[i]);
                int lj = strlen(a[j]);
                if (lj == li + 1)
                {
                    // ana  1
                    // anna 2
                    /*;;

                    */
                    int ok = 1;
                    for (int g = 0; g <= li / 2; g++)
                        if (a[i][g] != a[j][g])
                            ok = 0;
                    for (int g = li / 2 + 1; g < li; g++)
                        if (a[i][g] != a[j][g + 1])
                            ok = 0;
                    if (a[i][li / 2] != a[j][lj / 2])
                        ok = 0;
                    if (ok == 1)
                    {
                        cout << "DA";
                        return 0;
                    }
                }
            }

    cout << "NU";
    return 0;
}