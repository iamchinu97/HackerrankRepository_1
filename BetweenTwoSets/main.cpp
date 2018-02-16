#include <iostream>

using namespace std;
#define max 100
int main()
{
    int n,m;
    int i,j,k;
    int flag=0,flag1=0,flag2=0;
    int a[max],b[max];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=100;i++)
    {
        j=0;k=0;
        while(a[j]!=0 && i%a[j]==0 && j<n)
        {
            flag1++;
            j++;
        }
        while(b[k]%i==0 && k<m)
        {
            flag2++;
            k++;
        }
        if(flag1==n && flag2==m)
        {
            flag++;
        }flag1=0;flag2=0;

    }
    cout<<flag;
    return 0;
}
