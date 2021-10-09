void sum_cif(int n, int &s)
{
    s = 0;
    do
    {
        s += n % 10;
        n /= 10;
    } while (n);
}