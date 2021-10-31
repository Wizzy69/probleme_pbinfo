#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //cu ajutorul unui nou vector
    char s[101];
    cin.getline(s, 101);
    int n=strlen(s);
    char aux[101];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if(!(strchr("02468", s[i])!=NULL))
            aux[k++] = s[i];
    }
    aux[k] = '\0';
    strcpy(s, aux);
    cout << s;
}