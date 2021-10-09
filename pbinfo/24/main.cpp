int oglindit(int n)
{
    int o = 0;
    do
    {
        o = o * 10 + n % 10;
        n /= 10;
    } while (n);
    return o;
}