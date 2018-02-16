#include <iostream>

using namespace std;

int main()
{
    int n,d,m;              //d is for sum of consecutive m;
    int i,j;
    int sum=0,flag=0;
    cin>>n;
    int chocolate[n];
    for(i=0;i<n;i++)
    {
        cin>>chocolate[i];
    }
    cin>>d>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+chocolate[i+j];
        }
        if(sum==d)
        {
            flag++;
        }
        sum=0;
    }
    cout<<flag;

    return 0;
}
