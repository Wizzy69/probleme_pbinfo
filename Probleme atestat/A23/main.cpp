bool verif(int **a, int n)
{
    int r = a[0][0] % 2;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (r != a[i][j] % 2)
                return false;
    return true;
}