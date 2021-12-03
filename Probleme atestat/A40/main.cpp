#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int verif(int &d,int &m,int &y)
{
    if(m>12)
    {
        cout<<"datele nu sunt valide";
        return 0;
    }
    if(m%2==1 && m<8)
        if(d>31)
        {
            cout<<"datele nu sunt valide";
            return 0;
        }
    if(m%2==0 && m<8 && m!=2)
        if(d>30)
        {
            cout<<"datele nu sunt valide";
            return 0;
        }
    if(m%2==1 && m>7)
        if(d>30)
        {
            cout<<"datele nu sunt valide";
            return 0;
        }
    if(m%2==0 && m>7)
        if(d>31)
        {
            cout<<"datele nu sunt valide";
            return 0;
        }
    if(m<1  || d<1 || y<0)
    {
        cout<<"datele nu sunt valide";
        return 0;
    }
    if(m==2)
        if(y%400==0)
        {
            if(d>30)
            {
                cout<<"datele nu sunt valide";
                return 0;
            }
        }
        else if(d>29)
        {
            cout<<"datele nu sunt valide";
            return 0;
        }
    return 1;
}
int main()
{
    int d1,d2,m1,m2,y1,y2,x,y;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    x=verif(d1,m1,y1);
    if(x==1)
        y=verif(d2,m2,y2);
    if(x && y)
        cout<<abs(y2-y1)<< " ani";
    return 0;
}
