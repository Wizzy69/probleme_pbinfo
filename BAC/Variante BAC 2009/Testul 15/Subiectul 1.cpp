/**
 * Exercitiul 1:
 *  Raspuns: d
 * 
 * Exercitiul 2:
 * a) 4
 * a    n   i
 * 25   6   1
 * 26       2
 * 22       3
 * 31       4
 * 15       5
 * 40       6
 * 4   
 * 
 * c)
 * a    i
 * 18   1
 * 19   2
 * 15   3
 * 24   4
 * 8      => pentru n trebuie citita valoarea 4
 * 
 * d) ?
 * 
 * b)
 */

#include <iostream>
using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            a = a - i * i;
        else
            a = a + i * i;
    cout << a;

    return 0;
}