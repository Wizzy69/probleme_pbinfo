#include <iostream>
#include <cstring>

using namespace std;

bool doarvoc(char *s)
{
    int n = strlen(s);
    int nrv = 0;
    for(int i=0;i<n;i++) if(strchr("aeiou", s[i])) nrv++;
    return nrv == n;
}

int main()
{
    char s[31];
    int n,nr=0;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
        cin.getline(s,31);
        if(doarvoc(s))
            nr++;
    }

    cout << nr;

    return 0;
}
