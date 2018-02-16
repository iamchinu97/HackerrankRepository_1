#include <iostream>

using namespace std;

int main()
{
    int n,p,total;
    cin>>n;
    cin>>p;
    int i=0;
    if(p<=n/2)
    {
        total=0;
        while(i!=p)
        {
            i++;
            if(i==p)
                break;
            total++;
            i++;
        }
    }
    else if(p>n/2)
    {
        i=n+1;
        total=0;
        while(i!=p)
        {
            i--;
            if(i==p)
                break;
            i--;
            if(n%2==0 && i==p)
                total++;
            if(i!=p)
                total++;
        }
    }
    cout<<total;
    return 0;
}
