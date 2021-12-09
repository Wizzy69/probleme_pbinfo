int sdiv(int x)
{
    int s=0,d;
    for(d=1;d*d<x;d++)
        if(x%d==0)
        s+=d+x/d;
    if(d*d==x)
        s+=d;
    return (x==s);
}

void prelucrare3(int a[][50],int n)
{
    int s=0,nr=0;

    for(int i=0;i<(n-1)/2;i++)
        for(int j=i+1;j<n-i-1;j++)
        if(sdiv(a[i][j]))
            s+=a[i][j],nr++;
    cout<<(double)(s/nr);
}