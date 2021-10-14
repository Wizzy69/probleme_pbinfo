#include <iostream>
using namespace std;

void verif(int x)
{
    int s = 0, i = 1;
    while (i < x)
    {
        s = 0;
        int j = i;
        int a[10000] = {0};
        int k = 0;
        while (s < x * x)
        {
            a[k] = j;
            s += j;
            j++;
            k++;
        }
        if (s == x * x)
        {
            for (int l = 0; l < k; l++)
                cout << a[l] << " ";
            return;
        }
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    verif(n);
    return 0;
}