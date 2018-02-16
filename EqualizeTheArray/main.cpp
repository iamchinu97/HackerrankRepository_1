#include <iostream>

using namespace std;

int main()
{
    int a[101]={0};
    int i=0,n,num,max1,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        a[num]++;
    }
    max1=a[0];
    for(int j=0;j<101;j++)
    {
        sum=sum+a[j];
        if(max1<=a[j])
        {
            max1=a[j];
        }
    }
    cout<<(sum-max1);
    return 0;
}
