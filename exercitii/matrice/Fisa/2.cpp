n - i - 1

    bool
    prim(int x)
{
    if (x < 2 || x > 2 && x % 2 == 0)
        return false;
    for (int d = 3; d * d <= x; d += 2)
        if (x % d == 0)
            return false;
    return true;
}

void valori(int &x, int &y)
{
    x = y = -1;
    for (int i = 0; i < p; i++)
        if (prim(a[i][p - i - 1]))
        {
            if (a[i][p - i - 1] > x && a[i][p - i - 1] > y)
                x = y, y = a[i][p - i - 1];
            else if (a[i][p - i - 1] < y && a[i][p - i - 1] > x)
                x = a[i][p - i - 1];
        }
}

int main()
{
    int k;
    cin >> k >> p;
    for (int i = 0; i < p; i++)
        for (int j = 0; j < p; j++)
            cin >> a[i][j];

    int a, b;
    valori(a, b);
    cout << a << b;
    return 0;
}