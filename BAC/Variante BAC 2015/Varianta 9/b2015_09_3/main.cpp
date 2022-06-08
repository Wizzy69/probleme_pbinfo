/*
Subiectul 3:
1. b
2. dcba
3.
*/
int Fibo(int n)
{
    int t1 = 1;
    int t2 = 1;
    int t3 = 2;
    n -= 2;
    while (n > 0)
    {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        if (t2 % 2 == 1)
            n--;
    }

    return t2;
}