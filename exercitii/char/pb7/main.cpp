#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[41], voc[]="aeiou", aux[41];
    cin>>a;
    int n=strlen(a);
    for(int i=0;a[i];i++)
        if(strchr(voc, a[i]))
        {
            strcpy(aux,a+i+1);
            a[i+1] = toupper(a[i]);
            a[i+2]=0;
            strcat(a+i+2, aux);
        }
        cout << a;
    return 0;
}
