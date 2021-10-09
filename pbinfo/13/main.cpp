#include <iostream>
#include <cstring>
using namespace std;
char a[11];
int main()
{
    cin.getline(a, 11);
    int l = strlen(a);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - i; j++)
            cout << a[j];
        cout << endl;
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = i; j < l; j++)
            cout << a[j];
        cout << endl;
    }
    return 0;
}