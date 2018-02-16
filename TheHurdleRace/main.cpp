#include <iostream>

using namespace std;

int main()
{
    int n,k,max1=0,sum=0;
    cin>>n>>k;
    int height[n];
    for(int i=0;i<n;i++)
        cin>>height[i];
    max1=k;
    for(int i=0;i<n;i++)
    {
        if(max1<height[i])
        {
            sum=sum+(height[i]-max1);
            max1=height[i];
        }
    }
    cout<<sum;
    return 0;
}
