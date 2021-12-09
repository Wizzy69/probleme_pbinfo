/*
    a[l][0] .. a[l][m-1]

    Permutarea catre stanga a unei linii
    void permutare_stnaga(int l)
    {
        int aux = a[l][0];
        for(int j=0;j<m-1;j++)
            a[l][j] = a[l+1][j];
        a[l][m-1] = aux;
    }

    Permutari circulare ale coloanelor
    a[0][c]
    a[1][c]
    .
    .
    .
    a[n-1][c]

    void permutare_jos_in_sus(int c)
    {
        int aux = a[n-1][c];
        for(int i = n-1; i > 0;i--)
            a[i][c] = a[i-1][c];
        a[0][c] = aux;
    }

    Problema: 
    Se da o matrice n x m
    Afisati toate permutarile catre dreapta ale liniei l

    void permutari(int l)
    {
        int k = m-1;
        while(k > 0)
        {
            int aux= a[l][m-1];
            for(int j=m-1;j>0;j--)
                a[l][j] = a[l][j-1];
            a[l][0] = aux;

            for (int j=0;j<m;j++)
                cout << a[l][j] << " ";
            cout << '\n';
            k--;
        }
    }
*/