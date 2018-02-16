#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    if(y>=1919)
    {
        if((y%4==0 && y%100!=0) || (y%400==0))
        {
            cout<<"12.09."<<y;
        }
        else
        {
            cout<<"13.09."<<y;
        }
    }
    if(y<1918)
    {
        if((y%4==0))
        {
            cout<<"12.09."<<y;
        }
        else
        {
            cout<<"13.09."<<y;
        }
    }
    if(y==1918)
    {
        cout<<"26.09.1918";
    }
    return 0;
}
