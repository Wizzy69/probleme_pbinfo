/*
    Sterg linie

  n   ->  nr de linii
  m   ->  nr de col
a[][] ->  matrice

void sterglinii(int &n)
{
    for (int i = 0; i < n; i++)
        if (prop(i) == 1)
        {
            for (int l = i; l < n - 1; l++)
                for (int j = 0; j < m; j++)
                    a[i][j] = a[l + 1][j];
            n--;
            i--;
        }
}

void stergcol(int c)
{
    for(int j=c;j < m-1;j++)
        for(int i=0;i<n;i++)
            a[i][j] = a[i][j+1];
}

*/