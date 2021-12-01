#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream finX("X.txt");
    ifstream finY("Y.txt");
    int j = 1, i = 1;
    char x[26];
    char y[26];
    finX >> x;
    finY >> y;

    while (i <= 7 && j <= 7)
    {
        if (strcmp(x, y) == 0)
        {
            cout << x << " ";
            finX >> x;
            i++;
            finY >> y;
            j++;
        }
        else
        {
            if (strcmp(x, y) < 0)
            {
                cout << x << " ";
                i++;
                finX >> x;
            }
            else if (strcmp(x, y) > 0)
            {
                cout << y << " ";
                finY >> y;
                j++;
            }
        }
    }
    while (i <= 7)
    {
        cout << x << " ";
        finX >> x;
        i++;
    }

    while (j <= 7)
    {
        cout << y << " ";
        finY >> y;
        j++;
    }
    
}