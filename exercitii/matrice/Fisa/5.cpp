int inlocuire(int x)
{
    int aux,p=1,c;
    aux=x;
    if(aux%10%2==0)
        while(aux%10%2==0)
            aux/=10;
    c=aux%10;
    aux=0;
    while(x)
    {
        if(x%10%2==1)
            aux=x%10*p+aux,p*=10;
        else
            aux=c*p+aux,p*=10;
        x/=10;
    }
    return aux;
}

void prelucrare(int a[][50],int n)
{
    for(int i=1; i<n; i++)
        for(int j=0; j<i; j++)
            a[i][j]=inlocuire(a[i][j]);
}

