int n, a[100][100];
int prim(int x);
void f(int &x, int &y)
{
    x = y = 0;
    for (int i = 0; i < n - 1; i++)
        if (prim(a[i][n - i - 1]) == 1)
        {
            int w = a[i][n - i - 1];
            if (w > y)
                x = y, y = w;
            else if (w > x)
                x = w;
        }
}