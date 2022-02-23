#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[256],b[256]="", *p, c;
    cin.getline(a,256);
    for(int i=0;a[i];i++)
    {
        if(strchr("aeiou", a[i]) && (i==0 || a[i-1] = ' '))
        {
            int st,dr;
            st=i;
            while(a[i] != ' ' && i<n) i++;
            dr=i-1;
            while(st<dr)
                c=a[st], a[st] = a[dr], a[dr]=c, st++,dr--;
        }
    }
    cout << a;

    return 0;
}
