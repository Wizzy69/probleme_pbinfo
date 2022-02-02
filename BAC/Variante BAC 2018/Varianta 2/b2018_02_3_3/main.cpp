int resturi(int n, int x, int y, int r)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (n % x == r && n % y == r)
            cnt++;
    return cnt;
}