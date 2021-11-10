int sub(int n)
{
    int f = 5;
    if(n<=5)
    {
        return n;
    }
    while(f<n)
        f = f * 2;
    return f;
}