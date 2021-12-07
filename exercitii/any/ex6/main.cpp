#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.in");
    int fr[1001] = {0};

    int x;
    while (fin >> x)
        if (x < 1000 && x >= 100)
            fr[x]++;
    int cnt = 0;
    int a, b, c;
    for (int i = 100; i <= 999 && cnt < 3; i++)
        if (fr[i] == 0)
        {
            cout << i << " ";
            cnt++;
        }
    if (cnt < 3)
        cout << "nu exista";
    return 0;
}
