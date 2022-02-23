#include <iostream>
#include <cstring>
using namespace std;
/**
    strtok(s, " ") - primu cuv
    strtok(NULL," ") urmatoarele cuv

*/
int main()
{
    char s[51], a[]=".,?! ";
    cin.getline(s,51);
    for(char *p=strtok(s, a);p;p=strtok(NULL, a))
        cout << p << "\n";
    return 0;
}
