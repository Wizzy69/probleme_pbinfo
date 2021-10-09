#include <iostream>
#include <fstream>
using namespace std;
int viz[101], a[101][101], n;
ifstream f("BFS.in");
ofstream g("BFS.out");
void bfs(int start)
{
    int c[101];
    int st = 1, dr = 1, nod;
    c[dr] = start;
    viz[start] = 1;
    while (st <= dr)
    {
        nod = c[st]; ///se extrage un nod din coada
        for (int i = 1; i <= n; i++)
            if (a[nod][i] == 1 && viz[i] == 0)
            {
                dr++;
                c[dr] = i;
                viz[i] = 1;
            }
        st++;
    }

    for (int i = 1; i <= dr; i++)
        g << c[i] << " ";
}
int main()
{
    int m, start, x, y;
    f >> n >> m >> start;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    bfs(start);
    return 0;
}