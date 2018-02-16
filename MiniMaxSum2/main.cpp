#include <iostream>

using namespace std;
int main()
{
long long a[5],sum=0,max1,min1;
int i;

    for(i=0;i<5;i++)
    {
      cin>>a[i];
    }
    max1=a[0];
    min1=a[0];
    for(i=0;i<5;i++)
    {
        if(max1<a[i])
        {
            max1=a[i];
        }
        if(min1>a[i])
        {
            min1=a[i];
        }
        sum=sum+a[i];
    }
    cout<<sum-max1<<" "<<sum-min1;
}
