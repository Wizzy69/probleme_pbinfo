/*

*/
#include <iostream>
#include <fstream>
using namespace std;
/*
fi=f(i-1)+f(i-2)-f(i-3)
f4 = z+y-x;
f5 = f4 + f3 - f2 = y+z-x + z - y = 2z-x;
f6 = f5+f4-f3 = 2z-x + z+y-x - z = 2z -2x + y
f7 = f6+f5-f4 = 2z-2x+y + 2z-x - z-y+x = 3z-2x
f8 = f7+f6-f5 = 3z-2x+ 2z-2x+y-2z+x = 3z-3x+y

    n-par:
        fn = (n/2-1)z - (n/2-1)x + y
    n - impar:
        fn = (n/2)z - (n/2-2)x
*/

int main()
{
    ofstream fout("bac.txt");
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    for (int i = n; i > 3; i--)
        if (i % 2 == 0)
            fout << (i / 2 - 1) * z - (i / 2 - 1) * x + y << " ";
        else
            fout << (i / 2) * z - (i / 2 - 1) * x << " ";
    fout << z << " " << y << " " << x;
    return 0;
}
