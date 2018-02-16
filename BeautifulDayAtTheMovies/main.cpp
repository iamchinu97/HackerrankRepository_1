#include <iostream>
#include <cmath>
using namespace std;
int reversed(int n)
{
    int r=0;
    while(n!=0)
    {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    return r;
}
int main()
{
    int j,strt,stop,k,flag=0,result;
    cin>>strt>>stop>>k;
    for(int i=strt;i<=stop;i++)
    {
        j=reversed(i);
        result=abs(i-j);
        if((result%k)==0)
            flag++;
    }
    cout<<flag;
    return 0;
}
