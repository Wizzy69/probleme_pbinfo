/*
Subiectul 3:
    1. b
    2.

 {fondante, caramele, dropsuri, acadele}

    (fondante, caramele),
    (fondante, caramele, dropsuri),
    (fondante, caramele, acadele),
    (fondante, dropsuri)

    Raspuns:

    (fondante, acadele),
    (caramele, dropsuri)

    3.


*/
int echilibrat(int n)
{
    int sp = 0, si = 0, poz = 0;
    while (n)
    {
        if (poz == 0)
            sp += n % 10;
        else if (poz == 1)
            si += n % 10;
        poz = 1 - poz;
        n /= 10;
    }

    return (!(sp % 2) && si % 2);
}