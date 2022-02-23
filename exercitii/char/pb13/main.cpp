#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[256],b[256]="", *p, c;
    cin.getline(a,256);
    for(char *p = strtok(a, " ");p;p=strtok(0, " "))
    {
        if(strchr("aeiuo", p[0])!=0)
        {
            int i=0;
            int j=strlen(p)-1;
            while(i<j)
                c=p[i],p[i]=p[j], p[j]=c,i++,j--;
        }
        strcat(b,p);
        strcat(b, " ");
    }
    strcpy(a,b);
    cout << a;

    return 0;
}
