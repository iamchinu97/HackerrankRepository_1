#include <iostream>

using namespace std;

int main()
{
    int n,E=100,num=0,k;
    cin>>n>>k;
    int c[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    do
    {
        num=(num+k)%n;
            if(c[num]==1)
                E=E-3;
            else if(c[num]==0)
                E=E-1;

    }while(num!=0);
    cout<<E;
    return 0;
}
