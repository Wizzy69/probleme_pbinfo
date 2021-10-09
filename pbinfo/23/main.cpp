void oglindit(int n, int &o)
{
    o = 0;
    do
    {
        o = o * 10 + n % 10;
        n /= 10;
    } while (n);
}