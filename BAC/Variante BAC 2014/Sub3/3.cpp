void interval(int n, int &a, int &b)
{
    a = b = 1;
    int x = n - 1;
    int y = n + 1;

    int d = 2;
    while (d <= x)
        a *= d, d++;

    d = 2;
    while (d <= y)
        b *= d, d++;

    a++;
    b--;
}
