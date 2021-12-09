/*

    Inserarea liniilor
    Inserarea unei linii in fata fiecarei linii cu proprietatea,
noua linie contine valoarea -100

    void inserare_linii(int &n)
    {
        for(int i=0; i<n;i++)
            if(prop(i) == 1)
            {
                n++;
                for(int l = n-1; l > i; l--)
                    for(int j=0;j<m;j++)
                        a[l][j] = a[l-1][j];;
                for(int j=0;j<m;j++)
                    a[i][j] = -100;
                i++;
            }
    }

    Inserati dupa fiecare linie cu prop o linie noua care contine doar valo -30.
    void inserare_dupa(int &n)
    {
        for(int i=0; i<n;i++)
            if(prop(i) == 1)
            {
                n++;
                for(int l = n-1; l > i+1; l--)
                    for(int j=0;j<m;j++)
                        a[l][j] = a[l-1][j];;
                for(int j=0;j<m;j++)
                    a[i+1][j] = -30;
                i++;
            }
    }
*/