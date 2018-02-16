#include <iostream>

using namespace std;

int main()
{
    int n,m,s,sum=0,max1=0,flag=0;
    cin>>s>>n>>m;
    int keypr[n],usbpr[m];
    for(int i=0;i<n;i++)
    {
        cin>>keypr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>usbpr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=keypr[i]+usbpr[j];
            if(sum>=max1 && sum<=s)
            {
                max1=sum;
            }
            if(sum>s)
            {
                flag++;
            }
        }
    }
    if(flag==(n*m))
    {
        cout<<"-1";
    }
    else
    {
        cout<<max1;
    }
    return 0;
}
